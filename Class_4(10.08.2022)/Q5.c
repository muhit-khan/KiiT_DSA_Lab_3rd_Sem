//5.WAP to replace every dynamic array element by multiplication of previous and next of an n element.
//MUHIT KHAN
//Roll: 21052943
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Array Size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", (arr+i));
    }
    int prev = *(arr + 0);
    for(int i = 1; i< n-1; i++)
    {
        int curr = *(arr + i);
        *(arr+i) = prev * *(arr+i+1);
        prev = curr;
    }
    for (int i=0; i<n; i++)
    {
        printf("%d ", *(arr+i)); 
    }
    return 0;
}