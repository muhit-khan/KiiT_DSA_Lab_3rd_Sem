//2.WAP to reverse the contents of a dynamic array of n elements.
//MUHIT KHAN 
//ROLL: 21052943


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n, i, temp;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("\nEnter %d Numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nArray in Orginal Order: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",*(p+i));
    }
    for(i = 0; i < n/2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + (n - 1) - i);
        *(p + (n - 1) - i) = temp;
    }
    printf("\nArray in Reverse Order: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",*(p+i));
    }
    return 0;
}