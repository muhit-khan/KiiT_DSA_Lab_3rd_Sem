//8.WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
//MUHIT KHAN
//Roll: 21052943

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, count=0;
    int *data, large = 0.00;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);    
    // Allocating memory for n elements
    data = (int *)calloc(n, sizeof(int)); 
    for (int i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", data + i);
    }   
    // Finding the largest number
    for (int i = 0; i < n; ++i)
      if (large < *(data + i))
        large = *(data + i);
    printf("\nLargest number = %d", large);
    // counting the largest number
    for (int i = 0; i < n; ++i)
      if (*(data+i)==large)
        count += 1;
    printf("\nLargest number presents %d times", count);
    free(data);
    return 0;
}