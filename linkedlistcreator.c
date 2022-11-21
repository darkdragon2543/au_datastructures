#include "linkedlistfunctions.h"

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






