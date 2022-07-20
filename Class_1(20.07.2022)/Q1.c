//Q1: WAP in  c to create an array and display the reverse of that array
//MUHIT KHAN

#include <stdio.h>

int main()
{
    int n = 6;
    int arr[] = {9, 8, 7, 2, 4, 3};
    printf("Raw Array: ");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nReversed Array: ");
     for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
}