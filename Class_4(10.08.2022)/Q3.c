//3.WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers.
//MUHIT KHAN
//Roll: 21052943

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", (arr+i));
    }
    for(int i = 0; i < n ;i++)
    {
        if((*(arr+i) % 2) == 0)
        {
            printf("%d ", *(arr+i));
        }
    }
    for(int i = 0; i < n ;i++)
    {
        if((*(arr+i) % 2) != 0)
        {
            printf("%d ", *(arr+i));
        }
    }

    return 0;
}