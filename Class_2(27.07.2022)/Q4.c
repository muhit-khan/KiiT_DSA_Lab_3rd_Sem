//4.WAP to sort a dynamic array of n numbers.
//MUHIT KHAN 
//ROLL: 21052943


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n, i, j, t;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    p=(int *)malloc(n *sizeof(int));
    printf("\nEnter %d Numbers: ",n);
    for(i=0; i <= n-1; i++)
    {
        scanf("%d", (p+i));
    }
    for(i=0; i<n; i++)
    {
        for(j=0;j<=i;j++)
        {
            if(*(p+i) < *(p+j))
            {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }
    printf("\nAfter Sorting in Ascending Order: ");
    for(i=0; i<n; i++)
        printf("%d ", *(p+i));
    return 0;
}