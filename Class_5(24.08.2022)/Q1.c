// Q1. WAP to read two polynomial and perform their addition using 1D array.
// MUHIT KHAN
// 21052943

#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, m, n, z = 0;
    for (i = 0; i <= 9; i++)
        a[i] = 0;
    for (i = 0; i <= 9; i++)
        b[i] = 0;
    printf("\nOrder of first Polynomial: ");
    scanf("%d", &m);
    printf("Co-efficients: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOrder of Second Polynomial: ");
    scanf("%d", &n);
    printf("Co-efficients: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    if (m >= n)
    {
        for (i = 0; i < m; i++)
        {
            c[i] = a[i] + b[i];
            z++;
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
            z++;
        }
    }
    printf("\n\nAdded Polinomial is: \nA = ");
    for (i = 0; i < z; i++)
    {
        printf("%dx^%d", c[i], i);
        if (i < z - 1)
            printf(" + ");
    }
    return 0;
}