#ifndef LINKEDLISTFUNCTIONS_H
#define LINKEDLISTFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}node;

node* listCreator(int n[] , int array_length);

void listPrinter(node* node_address);

node* listReverser(node* head);

#endif