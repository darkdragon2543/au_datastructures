#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}node;

node* listCreator(int n[] , int array_length)
{
	// create the head
	node* now = NULL;
	now = (node*) malloc(sizeof(node));
	node* head = now;

	// create the moving pointer
	node* next = NULL;

	// create the linked list
	for(int i = 0 ;  i < array_length - 1; i++)
	{
		
		next = (node*) malloc(sizeof(node)); // creates new node
		now->data = n[i]; // stores data in previous node
		now->next = next; // stores pointer to new node, in the previous node

		now = next; // moves ahead
	}

	// sets tail
	now->data = n[array_length-1];
	now->next = NULL;

	// returns head
	return head;
}

void listPrinter(node* node_address)
{
	while(node_address != NULL)
	{
		printf("%d " , node_address->data);
		node_address = node_address->next;
	}
}

int main()
{
	int values[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int count = 12;

	node* head = listCreator(values , count);
	listPrinter(head);

	return 0;
}

