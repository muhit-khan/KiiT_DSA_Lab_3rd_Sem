//2 WAP to find out the sum of the numbers stored in an array of integers.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>  
#define MAX 10
int  main()  
{  
    int arr[MAX], sum = 0; 
    int i;
    printf("Input %d elements in the array :\n", MAX);  
    for(i=0; i<MAX; i++)  
    {  
	    printf("element - %d : ",i+1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("\n Sum of the elements in array: %d", sum);  
    return 0;	
}