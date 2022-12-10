#include "linkedlistfunctions.h"

skipnode* skipListCreator(int n[] , int array_length)
{
	// create the head
	skipnode* now = NULL;
	now = (skipnode*) malloc(sizeof(skipnode));
	skipnode* head = now;

	// create the moving pointers
	skipnode* next = (skipnode*) malloc(sizeof(skipnode)); 
	skipnode* next2 = NULL;

	// create the linked list
	for(int i = 0 ;  i < array_length - 2; i++)
	{
		next2 = (skipnode*) malloc(sizeof(skipnode)); // creates new skipnode
		now->val = n[i]; // stores data in previous skipnode
		now->next = next; // stores pointer to new skipnode, in the previous skipnode
		now->next2 = next2; // stores pointer to new skipnode, in the previous skipnode 
	
		// moves ahead
		now = next; 	
		next = next2;
	}

	// sets tails
	now->val = n[array_length-2];
	now->next = next;
	now->next2 = NULL;

	next->val = n[array_length-1];
	next->next = NULL;
	next->next2 = NULL;

	// returns head
	return head;
}

void skipListPrinter(skipnode* node_address)
{
	while(node_address != NULL)
	{
		printf("%d" , node_address->val);

		if(node_address->next!=NULL)
		{
			printf("(%d)" , node_address->next->val);
		}

		if(node_address->next2!=NULL)
		{
			printf("(%d) " , node_address->next2->val);
		}

		printf(" ");

		node_address = node_address->next;
	}
}