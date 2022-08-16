//1 WAP to create an array that can store max. 50 integers and display the contents of the array
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>  
#define MAX 50
int  main()  
{  
    int arr[MAX]; 
    int i;
    printf("Input %d elements in the array :\n", MAX);  
    for(i=0; i<MAX; i++)  
    {  
	    printf("element - %d : ",i+1);
        scanf("%d", &arr[i]);  
    }
    printf("\nElements in array are: ");  
    for(i=0; i<MAX; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    return 0;	
}