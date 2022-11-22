#include "arraysorterfunctions.h"

void selectionSort(int list[], int length)
{
	for (int i = 0; i < length; ++i) // run through the entire list
	{
		for (int j = i; j < length; ++j) // run through the unsorted elements
		{
			if ( list[j] < list[i]) // if the current element is less than the first one
			{
				int swap = list[i]; //swap them
				list[i] = list[j];
				list[j] = swap;
			} 
			// now the smallest unsorted element will be at 'i', then i increments to i+1
		}
	}
}
