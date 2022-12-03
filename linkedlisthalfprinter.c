#include "linkedlistfunctions.h"

void listHalfPrinter(node* node_address) // accepts the head of the linked list
{
	node* hare_address = node_address; // set hare at head
	node* tort_address = node_address; // set tortoise at head

	while(hare_address != NULL) // if hare has reached the end then stop
	{
		printf("%d " , tort_address->data); // print data at tortoise

		tort_address = tort_address->next; // shift tortoise by 1

		if (hare_address->next != NULL) // if it's not on the tail
			hare_address = hare_address->next->next; // shift hare by 2
		else
			hare_address = hare_address->next; // if it's on the tail then set to NULL
	}
}

