%{
#include <stddef.h>
double pow(double, double);
void   push(int), *malloc(size_t), pop(char, int);
int    top, yyerror(const char *), yylex(void);
typedef struct Node *Node;
struct Node
{	char op; int val;
	Node left, right;
}	*stack[100];
%}
%token num
%%
S : A         { void ast(Node); ast(*stack); }
A : A '+' M   { pop('+', $$ = $1 + $3); }
  | A '-' M   { pop('-', $$ = $1 - $3); }
  | M         {          $$ = $1;       }
M : M '*' E   { pop('*', $$ = $1 * $3); }
  | M '/' E   { pop('/', $$ = $1 / $3); }
  | M '%' E   { pop('%', $$ = $1 % $3); }
  | E         {          $$ = $1;       }
E : P '^' E   { pop('^', $$ = pow($1, $3)) ; }
  | P         {          $$ = $1;       }
P : '(' A ')' {          $$ = $2;       }
  | num       {     push($$ = $1);      }
%%
int  main(void) { yyparse(); }
int  yyerror(const char *message) { int puts(const char *); puts(message); }
void push(int val)
{	Node node = malloc(sizeof *node);
	node->right = node->left = NULL ;
	(stack[top++] = node)->op = 0 , node->val = val;
}
void pop(char op, int val)
{	Node node = malloc(sizeof *node);
	node->right = stack[--top], node->left = stack[--top];
	(stack[top++] = node)->op = op, node->val = val;
}
void ast(Node node)
{	static int indent; int printf(const char *, ...); if (!node) return;
	indent++, ast(node->left), ast(node->right), indent--;
	if (indent) { for (int _ = indent; --_; ) printf("    "); printf("|-> "); }
	node->op ? printf("%c:%d\n",node->op,node->val) : printf("%d\n",node->val);
	unsigned int sleep(unsigned int); sleep(1);
}
