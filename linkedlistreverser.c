#include "linkedlistfunctions.h"

node* listReverser(node* head)
{
	// make the head into the tail
	node* current = head;
	node* previous = NULL;
	node* following = NULL;

	// reverse the list
	while(current != NULL)
	{
		following = current->next; // store where the next node is
		current->next = previous; // point to the previous node
		previous = current; // make the current node the previous node
		current = following; // make the next node the current node
	}
	
	// return new head
	return previous;
}


