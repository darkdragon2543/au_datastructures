#include "treefunctions.h"

void heapify(int a[] , int father , int heapend)
{
    int bigdaddy = father;
    int left = (father * 2) + 1;
    int right = (father * 2) + 2;

    if (left < heapend && a[left] > a[bigdaddy])
    {
        bigdaddy = left;
    }

    if (right < heapend && a[right] > a[bigdaddy])
    {
        bigdaddy = right;
    }

    if (father != bigdaddy)
    {
        int swap = a[father];
        a[father] = a[bigdaddy];
        a[bigdaddy] = swap;

        heapify(a , bigdaddy , heapend);
    }
}

void heapSort(int a[] , int l)
{
   for (int i = (l/2) - 1 ; i >= 0; i--)
   {
        heapify(a , i , l);
   }

   for (int i = l-1; i >= 0; i--)
   {
        int swap = a[0];
        a[0] = a[i];
        a[i] = swap;

        heapify(a , 0 , i);
   }

}
   
    
