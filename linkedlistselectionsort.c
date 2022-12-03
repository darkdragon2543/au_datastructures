#include "linkedlistfunctions.h"

node* listSelectionSort(node* head)
{

	for (node* i = head ; i != NULL ; i = i->next) // run through the entire list
	{

		for (node* j = i ; j != NULL ; j = j->next) // run through the unsorted elements
		{
			if ( j->data < i->data) // if the current element is less than the first one
			{
				int swap = i->data; //swap them
				i->data = j->data;
				j->data = swap;
			} 
		} // now the smallest unsorted element will be at 'i', then i increments to i+1
	}

	return head;
}
