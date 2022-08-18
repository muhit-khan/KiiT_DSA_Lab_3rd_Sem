//9.You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.
//MUHIT KHAN
//Roll: 21052943

#include <stdio.h> 
int main()
{ 
    int arr[] = { 1, 0, 1, 0, 0, 1, 0, 1, 1 };
    int i, zeros = 0, n = sizeof(arr) / sizeof(arr[0]);
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
    for (int i = 0; i < n; i++)
        if (arr[i] == 0) 
            zeros++; 
    for (int i = 0; i < zeros; i++) 
        arr[i] = 0; 
    for (int i = zeros; i < n; i++) 
        arr[i] = 1; 
    printf("The array after segregation is: ");
    for (int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    return 0; 
}