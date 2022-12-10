#include "linkedlistfunctions.h"
#include "arraysorterfunctions.h"
#include "treefunctions.h"

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
		printf("\n6) Print the first half of the linked list.");
		printf("\n7) Print the linked list.");
		printf("\n8) Create a basic skip-list with the original array, and print it.");
		printf("\n9) Exit.");
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

		case 2:
			; // blank statement to avoid error throw
			int chunk = 0;
			printf("Good choice! What is the chunk size to be reversed?: ");
			scanf("%d",&chunk);
			head = listChunkReverser(head,chunk);
			printf("Here is the %d node chunk reversed list: ");
			listPrinter(head);
			break;

		case 3:
			head = listSelectionSort(head);
			printf("\nHere is the sorted list, using selection sort: ");
			listPrinter(head);
			break;

		case 4:
			head = listInsertionSort(head);
			printf("\nHere is the sorted list, using insertion sort: ");
			listPrinter(head);
			break;

		case 5:
			head = listQuickSort(head);
			printf("\nHere is the sorted list, using quick sort: ");
			listPrinter(head);
			break;

		case 6:
			printf("\nHere is the first half of the linked list: ");
			listHalfPrinter(head);
			break;

		case 7:
			printf("\nHere the list as it currently exists: ");
			listPrinter(head);
			break;

		case 8:
			; // blank statement to avoid error throw
			skipnode* skiphead = skipListCreator(input, input_length);
			printf("\nHere is the skip list, with a two node lookahead: ");
			skipListPrinter(skiphead);
			break;

		case 9:
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

void treestuff(int x)
{
	printf("\nGood choice!. Let us first look at the data we are working with. How many numbers do you have?: ");
	int input_length;
	scanf("%i" , &input_length);

	printf("\nPlease enter the numbers:\n ");
	int input[input_length];
	for (int i = 0; i < input_length; ++i)
	{
		scanf("%i" , &input[i]);
		printf(" ");
	}

	treenode* root = NULL;

	printf("Here are the numbers you are working with: ");
	arrayPrinter(input , input_length);

	int* input_pointer = &input[0];

	while (1)
	{
		printf("\n\nWhat would you like to do now?\n");
		printf("\n1) Create a Binary Search Tree.");
		printf("\n2) Sort data using a heap, and heapsort.");
		printf("\n3) Create an AVL tree.");
		printf("\n4) Exit.");
		printf("\n\nEnter your choice: ");

		int c;
		scanf("%i" , &c);

		switch (c)
		{
		case 1:
		{
			root = arrayToBST(input_pointer, input_length);
			printf("\nHere is your Binary Search Tree:\n");
			printTree2D(root);

			while(1)
			{
				printf("\n\nWhat would you like to do now?:");
				printf("\n1) Delete an element.");
				printf("\n2) Print the tree.");
				printf("\n3) Exit.");
				printf("\n\nEnter your choice: ");
				scanf("%i" , &c);

				switch(c)
				{
					case 1:
						; // blank statement to avoid error throw
						int k = 0;
						printf("Good choice! What is the node to be deleted?: ");
						scanf("%d",&k);
						root = deleteNodeBST(root, k);

						printf("Here is the edited list: ");
						printTree2D(root);

						break;

					case 2:
						printf("\nHere is your Binary Search Tree:\n");
						printTree2D(root);
						break;

					case 3:
						return;
						break;

					default:
						printf("\nThis is an invalid choice. Please try again.");
						break;
				}
			}
			
			break;
		}

		case 2:
			heapSort(input , input_length);
			printf("\n\nHere is the list, sorted with heapsort: ");
			arrayPrinter(input , input_length);
			break;

		case 4:
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
	printf("\nWhat would you like to utilise? (1/2/3) : ");

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

	case 3:
		treestuff(0);
	
	default:
		printf("\nThis is an invalid choice. Please try again.");
		break;
	}

}