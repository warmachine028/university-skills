/* CODE 12:
WAP in C to add Polynomial Linked List

*/

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

typedef struct node
{
	int data;
	struct node *next;
} node;

node *insert(node *head, int data)
{
	node *temp = createNode;
	temp->next = NULL;
	temp->data = data;
	if (head == NULL)
		return temp;
	node *ref = head;
	while (ref->next)
		ref = ref->next;
	ref->next = temp;
	return head;
}

void main()
{
	int A[] = {5, 0, 10, 6},
		B[] = {1, 2, 4};

	node *polynomial1 = NULL,
		 *polynomial2 = NULL;

	// Converting Array to LinkedLists
	for (int i = 0; i < sizeof(A) / sizeof(int); i++)
		polynomial1 = insert(polynomial1, A[i]);

	for (int i = 0; i < sizeof(B) / sizeof(int); i++)
		polynomial2 = insert(polynomial2, B[i]);

	// Adding 2 LinkedLists
	while (polynomial1 || polynomial2)
	{
		int int1 = polynomial1 ? polynomial1->data : 0;
		int int2 = polynomial2 ? polynomial2->data : 0;
		printf("%i ", int1 + int2);
		polynomial1 = polynomial1 ? polynomial1->next : NULL;
		polynomial2 = polynomial2 ? polynomial2->next : NULL;
	}
}