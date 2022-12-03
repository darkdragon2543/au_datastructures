#include "linkedlistfunctions.h"

node* listInsertionSort(node* head)
{
	node* sortedhead = NULL;
	node* next;

	for (node* i = head ; i != NULL ; i = next) // run through the entire list
	{
		next = i->next;

		if (sortedhead==NULL || i->data <= sortedhead->data)
		{
			i->next = sortedhead;
			sortedhead = i;
		}

		else
		{
			node* j = sortedhead; 

			while(j->next != NULL && j->next->data < i->data)// run through the sorted elements
				j = j->next;		

			i->next = j->next;
			j->next = i;
		}	
	}

	return sortedhead;
}
