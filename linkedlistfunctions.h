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

void listHalfPrinter(node* node_address);

node* listSelectionSort(node* head);

node* listInsertionSort(node* head);

node* LLpartition(node* nodeFrom, node* nodeTo);

node* listQuickSorter(node* nodeFrom , node* nodeTo);

node* listQuickSort(node* head);

node* listChunkReverser(node* head, int k);

typedef struct Skipnode
{
	int val;
	struct Skipnode* next;
	struct Skipnode* next2;

}skipnode;

skipnode* skipListCreator(int n[] , int array_length);

void skipListPrinter(skipnode* node_address);

#endif