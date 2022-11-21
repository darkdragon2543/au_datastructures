#include "linkedlistfunctions.h"

node* listReverser(node* head)
{
	// make the head into the tail
	node* current = head->next;
	node* previous = head;
	node* following = NULL;
	head->next = NULL;

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


