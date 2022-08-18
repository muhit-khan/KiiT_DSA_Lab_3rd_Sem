//Q7. WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n
//MUHIT KHAN
//Roll: 21052943

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    double *data, large = 0.00, small;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);    
    // Allocating memory for n elements
    data = (double *)calloc(n, sizeof(double));
    if (data == NULL) {
        printf("Error!!! memory not allocated.");
    exit(0);
    }   
    for (int i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%lf", data + i);
    }   
    // Finding the largest number
    for (int i = 0; i < n; ++i)
      if (large < *(data + i))
        large = *(data + i);
    printf("Largest number = %.2lf", large);
    // Finding the smallest number
    small = large;
    for (int i = 0; i < n; ++i)
      if (small > *(data + i))
        small = *(data + i);
    printf("\nSmallest number = %.2lf", small);
    free(data);
    return 0;
}