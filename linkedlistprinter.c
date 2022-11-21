#include "linkedlistfunctions.h"

void listPrinter(node* node_address)
{
	while(node_address != NULL)
	{
		printf("%d " , node_address->data);
		node_address = node_address->next;
	}
}