// CODE 2: You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.


int maxActivity(int *start, int *finish, int n) {
    
}



int main() {
    int n;
    scanf("%i", &n, &W);
    
    int *start = malloc(sizeof n * n);
    int *finish = malloc(sizeof n * n);
    
    for (int i=0; i<n; i++)
        scanf("%i", &start[i]);
    for (int i=0; i<n; i++)
        scanf("%i", &finish[i]);
    
    int solution = maxActivity(start, finish, n);
    printf("%i", solution);
}