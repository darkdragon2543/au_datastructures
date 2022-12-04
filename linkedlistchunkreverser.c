#include "linkedlistfunctions.h"

node* listChunkReverser(node* head, int k)
{
	node* current = head;
	node* following = NULL;
	node* previous = NULL;
	
	node* prevtail = NULL;
	node* prevprevtail = NULL;

	while(current != NULL)
	{
		previous = NULL;
		prevprevtail = prevtail;
		prevtail = current;

		for (int i = 0; i < k; ++i)
		{
			if(current==NULL)
				break;

			following = current->next;
			current->next = previous;
			previous = current;
			current = following;
		}

		if(prevtail == head)
		{
			head = previous;
		}

		else
		{
			prevprevtail->next = previous;
		}
	}

	return head;
}
