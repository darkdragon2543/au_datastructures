#include "arraysorterfunctions.h"

int partition(int list[], int lo , int hi)
{
	int leftwall = lo;
	int rightwall = hi-1;

	while (leftwall <= rightwall)
	{
		if (list[leftwall] < list[hi]) // if the element is in the correct place, ignore it
		{
			++leftwall;
		}

		else if (list[rightwall] >= list[hi]) // if the element is in the correct place, ignore it
		{
			--rightwall;
		}

		else // once you have two elements in the wrong place, swap them
		{
			int swap = list[leftwall];
			list[leftwall] = list[rightwall];
			list[rightwall] = swap;
			++leftwall;
			--rightwall;
		}
	}

	int swap = list[leftwall]; // put the pivot in the correct position
	list[leftwall] = list[hi];
	list[hi] = swap;

	return leftwall; // and return it

}

void quickSort(int list[] , int lo , int hi)
{
	if(lo<hi)
	{
		int pivot = partition(list, lo , hi);
		quickSort(list, pivot+1 , hi);
		quickSort(list, lo , pivot-1);
	}
}
