#include "linkedlistfunctions.h"

void linkedlists(int x)
{
	printf("\nGood choice!. Let us first create a linked list. How many numbers are in the list?: ");
	int input_length;
	scanf("%i" , &input_length);

	printf("\nPlease enter the numbers in the list:\n ");
	int input[input_length];
	for (int i = 0; i < input_length; ++i)
	{
		scanf("%i" , &input[i]);
		printf(" ");
	}

	node* head = listCreator(input , input_length);

	printf("Here is the linked list you have created: ");
	listPrinter(head);

	while (1)
	{
		printf("\n\nWhat would you like to do now?\n");
		printf("\n1) Reverse the linked list.");
		printf("\n2) Chunk-reverse the linked list.");
		printf("\n3) Sort the linked list using selection sort.");
		printf("\n4) Sort the linked list using insertion sort.");
		printf("\n5) Sort the linked list using quick sort.");
		printf("\n6) Print the linked list.");
		printf("\n7) Exit.");
		printf("\n\nEnter your choice: ");

		int c;
		scanf("%i" , &c);

		switch (c)
		{
		case 1:
			head = listReverser(head);
			printf("Here is the reversed list: ");
			listPrinter(head);
			break;

		case 6:
			printf("Here the list as it currently exists: ");
			listPrinter(head);
			break;

		case 7:
			return;
			break;
	
		default:
			printf("This is an invalid choice. Please try again.");
			break;
		}
	}

	return;

}

int main()
{
	printf("DATA STRUCTURES COURSE - SHAUNAK SAWANT");
	printf("\n 1) Linked List Based Programs");
	printf("\n 2) Array Sorting Programs");
	printf("\n 3) Heap Based Programs");
	printf("\nWhat would you like to utilise? (1/2/3) : ");

	int choice;
	scanf("%i" , &choice);

	switch (choice)
	{
	case 1:
		linkedlists(0);
		break;
	
	default:
		printf("This is an invalid choice. Please try again.");
		break;
	}

}