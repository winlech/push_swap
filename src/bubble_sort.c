#include "push_swap.h"

static void swap(int *xp, int *yp)
{
    int temp = *xp;

    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int *arr, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size - 1)
    {
        while (j < size - i - 1)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            j++;
        }
        j = 0;
        i++;
    }
}