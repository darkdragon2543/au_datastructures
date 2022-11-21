#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;}node;

node* listCreator(int n[] , int array_length){
	// create the head
	node* now = NULL;
	now = (node*) malloc(sizeof(node));
	node* head = now;

	// create the moving pointer
	node* next = NULL;

	// create the linked list
	for(int i = 0 ;  i < array_length - 1; i++)
	{
		
		next = (node*) malloc(sizeof(node)); // creates new node
		now->data = n[i]; // stores data in previous node
		now->next = next; // stores pointer to new node, in the previous node

		now = next; // moves ahead
	}

	// sets tail
	now->data = n[array_length-1];
	now->next = NULL;

	// returns head
	return head;}

node* listReverser(node* head){
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
	return previous;}

node* listChunkReverser(node* head)
{
	
}

void listPrinter(node* node_address){
	while(node_address != NULL)
	{
		printf("%d " , node_address->data);
		node_address = node_address->next;
	}}

int main(){
	int values[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int count = 12;

	node* head = listCreator(values , count);

	listPrinter(head);

	head = listReverser(head);

	listPrinter(head);

	return 0;}





