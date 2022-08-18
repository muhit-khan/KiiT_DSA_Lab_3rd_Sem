//11.WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers using a single loop.
//MUHIT KHAN
//Roll: 21052943

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, count=0;
    int *data, *restruct, large = 0.00;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    // Allocating memory for n elements
    data = (int *)mcalloc(n * sizeof(int));
    restruct = (int *)mcalloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", data + i);
    }
    int p = 0, q = n-1;
    for (int i = 0; i < n; ++i){
        if (*(data+i)%2 == 0){
            *(restruct+p) = *(data+1);
            p += 1;
        }
        else
            *(restruct+q) = *(data+1);
            q -= 1;
    }
    printf("\nLargest number presents %d times", count);
    free(data);
    return 0;
}