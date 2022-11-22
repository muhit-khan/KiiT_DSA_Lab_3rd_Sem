#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, m, n, z = 0;
    for (i = 0; i <= 9; i++)
        a[i] = 0;
    for (i = 0; i <= 9; i++)
        b[i] = 0;
    printf("\nEnter the order of Miniuned Polynomial: ");
    scanf("%d", &m);
    printf("Enter the Co-efficient: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the order of Subtrahend Polynomial: ");
    scanf("%d", &n);
    printf("Enter the Co-efficient: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    if (m >= n)
    {
        for (i = 0; i < m; i++)
        {
            c[i] = a[i] - b[i];
            z++;
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
        }
    }
    printf("\n\nSubtracted Polynomial is: \nA = ");
    for (i = 0; i < z; i++)
    {
        printf("%dx^%d", c[i], i);
        if (i < z - 1)
            printf(" + ");
    }
    return 0;
}