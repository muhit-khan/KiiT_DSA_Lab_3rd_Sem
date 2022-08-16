//3 WAP to find largest element stored in an array.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>  
#define MAX 10
int  main()  
{  
    int arr[MAX], large = 0; 
    int i;
    printf("Input %d elements in the array :\n", MAX);  
    for(i=0; i<MAX; i++)  
    {  
	    printf("element - %d : ",i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>large)
            large = arr[i]; 
    }
    printf("\nThe largest element in array: %d", large);  
    return 0;	
}