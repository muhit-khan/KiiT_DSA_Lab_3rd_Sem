// 3. WAP to read two polynomial and perform their multiplication using 1D array.
// MUHIT KHAN
// 21052943

#include <stdio.h>
#include <stdlib.h>
int *multiply(int A[], int B[], int m, int n)
{
    int *prod = (int *)malloc((m + n - 1) * sizeof(int));
    for (int i = 0; i < m + n - 1; i++)
        prod[i] = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            prod[i + j] += A[i] * B[j];
    return prod;
}

void printPoly(int poly[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", poly[i]);
        if (i != 0)
            printf("x^%d", i);
        if (i != n - 1)
            printf(" + ");
    }
}

int main()
{
    int m, n;
    printf("Enter Order of 1st & 2nd polynomial: ");
    scanf("%d %d", &m, &n);
    int A[m], B[n];
    printf("First polynomial's Co-efficients: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &A[i]);
    printf("Second polynomial's Co-efficients: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &B[i]);
    int *prod = multiply(A, B, m, n);
    printf("\nProduct polynomial is ");
    printPoly(prod, m + n - 1);
    return 0;
}