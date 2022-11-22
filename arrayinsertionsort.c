#include "arraysorterfunctions.h"

void insertionSort(int list[], int length)
{
	for (int i = 1; i < length; ++i)
	{
		int j = i;
		while( (j>0) && (list[j-1]>list[j]) )
		{
			int swap = list[j];
			list[j] = list[j-1];
			list[j-1] = swap;
			j = j - 1;
		}
	}
}
