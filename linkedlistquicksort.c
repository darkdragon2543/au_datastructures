#include "linkedlistfunctions.h"

node* LLpartition(node* nodeFrom, node* nodeTo)
{
	node* pivot = nodeFrom->next;
	node* loHead = NULL;
	node* loTail = NULL;
	node* hiHead = NULL;
	node* hiTail = NULL;
	node* next = NULL;

	for (node* i = pivot->next ; i != nodeTo ; i = next)
	{
		next = i->next;

		if (i->data < pivot->data)
		{
			if(loHead==NULL)
				loTail = i;
			i->next = loHead;
			loHead = i;
		}
		else
		{
			if(hiHead==NULL)
				hiTail = i;
			i->next = hiHead;
			hiHead = i;
		}
	}
	
	if(loHead==NULL)
		nodeFrom->next = pivot;
	else
	{
		nodeFrom->next = loHead;
		loTail->next = pivot;
	}
	
	if(hiHead==NULL)
		pivot->next = nodeTo;
	else
	{
		pivot->next = hiHead;
		hiTail->next = nodeTo;
	}
	
	return pivot;
}

node* listQuickSorter(node* nodeFrom , node* nodeTo)
{
	if(nodeFrom->next != nodeTo)
	{
		node* pivot = LLpartition(nodeFrom,nodeTo);

		listQuickSorter(nodeFrom, pivot);
		listQuickSorter(pivot , nodeTo);
	}	
}

node* listQuickSort(node* head)
{
	node dummyNode1;
	dummyNode1.next = head;

	node dummyNode2;
	dummyNode2.next = NULL;
	dummyNode2.data = 9999;

	node* tail = head;
	while(tail->next != NULL)
		tail = tail->next;

	node* nodeFrom = &dummyNode1;
	node* nodeTo = &dummyNode2;

	tail->next = nodeTo;

	listQuickSorter(nodeFrom , nodeTo);

	tail = nodeFrom;
	while(tail->next != nodeTo)
		tail = tail->next;

	tail->next = NULL;

	return nodeFrom->next;
}
