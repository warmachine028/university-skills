%{
	#define NULL ((void *)0)
	double pow(double, double);
	int top, 
		yyerror(const char *), 
		yylex(void),
		puts(const char *),
		sleep(int),
		printf(const char *, ...); 
	typedef struct Node *Node;
	struct Node {	
		char op; 
		int val;
		Node left, right;
	} *stack[100];
	void push(int), 
		 *malloc(unsigned int), 
		 pop(char, int),
		 ast(Node);
%}

%token num

%%
S : A { ast(*stack); }
A : A '+' M   { pop('+', $$ = $1 + $3); }
  | A '-' M   { pop('-', $$ = $1 - $3); }
  | M         { $$ = $1; }
M : M '*' E   { pop('*', $$ = $1 * $3); }
  | M '/' E   { pop('/', $$ = $1 / $3); }
  | M '%' E   { pop('%', $$ = $1 % $3); }
  | E         { $$ = $1; }
E : P '^' E   { pop('^', $$ = pow($1, $3)); }
  | P         { $$ = $1; }
P : '(' A ')' { $$ = $2; }
  | num       { push($$ = $1); }
%%

int main() { 
	yyparse(); 
}

int yyerror(const char *message) { 
	puts(message); 
}

void push(int val) {	
	Node node = malloc(sizeof *node);
	node->right = node->left = NULL;
	(stack[top++] = node)->op = 0; 
	node->val = val;
}

void pop(char op, int val) {	
	Node node = malloc(sizeof *node);
	node->right = stack[--top];
	node->left = stack[--top];
	(stack[top++] = node)->op = op;
	node->val = val;
}

void ast(Node node) {	
	static int indent;
	if (!node) 
		return;
	indent++;
	// Recurse
	ast(node->left);
	ast(node->right);

	indent--;
	if (indent) { 
		for (int _ = indent; --_; ) 
			printf("    "); 
		printf("|-> "); 
	}
	node->op ? printf("%c:%d\n", node->op, node->val) : printf("%d\n", node->val);
	sleep(1);
}
