// 2. IMPLEMENT OPTIMIZED BUBBLE SORT.

#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; ++j)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        if (swapped == 0)
            break;
    }
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d  ", array[i]);
    printf("\n");
}

int main()
{
    int data[] = {-2, 45, 0, 11, -9};
    int n = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, n);
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, n);
}