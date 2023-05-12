// \
   CODE: Write a C program to implement DAG \
   DAG: Intermediate code Generation \
	DAG / 3 Address Code \
	Abstract Syntax Tree

#define NULL 0
#define MIN_PER_RANK 1
#define MAX_PER_RANK 5
#define MIN_RANKS 3
#define MAX_RANKS 5
#define PERCENT 30

int printf(const char *, ...),
    time(int),
    rand();
void srand(int);

void main() {
	int nodes = 0;
	srand(time(NULL));
	int ranks = MIN_RANKS + (rand() % (MAX_RANKS - MIN_RANKS + 1));
	printf("DIRECTED ACYCLIC GRAPH\n");
	for (int i = 0; i < ranks; i++) {
		int new_nodes = MIN_PER_RANK + (rand() % (MAX_PER_RANK - MIN_PER_RANK + 1));

		for (int j = 0; j < nodes; j++)
			for (int k = 0; k < new_nodes; k++)
				if ((rand() % 100) < PERCENT)
					printf("%d -> %d; \n", j, k+nodes);
		nodes += new_nodes;
	}
}
