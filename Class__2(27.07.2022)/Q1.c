//1. WAP to find out the smallest and largest element stored in an array of n integers.
//MUHIT KHAN 
//ROLL: 21052943

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, large, small;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int  arr[n];
    printf("\nInput the array elements : ");
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    large=small=arr[0];
    for(i=1;i<n;++i)
    {
        if(arr[i]>large)
            large=arr[i];
        if(arr[i]<small)
            small=arr[i];
    }
    printf("\nThe smallest element is %d\n",small);
    printf("\nThe largest element is %d\n",large);
    return 0;
}