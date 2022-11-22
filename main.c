#include "linkedlistfunctions.h"
#include "arraysorterfunctions.h"

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
			printf("\nHere is the reversed list: ");
			listPrinter(head);
			break;

		case 6:
			printf("\nHere the list as it currently exists: ");
			listPrinter(head);
			break;

		case 7:
			return;
			break;
	
		default:
			printf("\nThis is an invalid choice. Please try again.");
			break;
		}
	}

	return;
}

void arraysorters(int x)
{
	printf("\nGood choice!. Let us first create an array. How many numbers would you like to sort?: ");
	int input_length;
	scanf("%i" , &input_length);

	printf("\nPlease enter the numbers you would like to sort:\n ");
	int input[input_length];
	for (int i = 0; i < input_length; ++i)
	{
		scanf("%i" , &input[i]);
		printf(" ");
	}

	printf("Here is the array you have created: ");
	arrayPrinter(input , input_length);

	while (1)
	{
		printf("\n\nWhat sorting method would you like to use?\n");
		printf("\n1) Selection Sort.");
		printf("\n2) Insertion Sort.");
		printf("\n3) Quick Sort.");
		printf("\n4) Print the array.");
		printf("\n5) Exit.");
		printf("\n\nEnter your choice: ");

		int c;
		scanf("%i" , &c);

		switch (c)
		{
		case 1:
			selectionSort(input , input_length);
			printf("\nHere is the sorted array, using selection sort: ");
			arrayPrinter(input, input_length);
			break;

		case 2:
			insertionSort(input , input_length);
			printf("\nHere is the sorted array, using insertion sort: ");
			arrayPrinter(input, input_length);
			break;

		case 3:
			quickSort(input , 0 , input_length-1);
			printf("\nHere is the sorted array, using quick sort: ");
			arrayPrinter(input, input_length);
			break;

		case 4:
			printf("\nHere the array as it currently exists: ");
			arrayPrinter(input, input_length);
			break;

		case 5:
			return;
			break;
	
		default:
			printf("\nThis is an invalid choice. Please try again.");
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
	printf("\n 3) Tree Based Programs");
	printf("\n 4) Heap Based Programs");
	printf("\nWhat would you like to utilise? (1/2/3/4) : ");

	int choice;
	scanf("%i" , &choice);

	switch (choice)
	{
	case 1:
		linkedlists(0);
		break;

	case 2:
		arraysorters(0);
		break;
	
	default:
		printf("\nThis is an invalid choice. Please try again.");
		break;
	}

}