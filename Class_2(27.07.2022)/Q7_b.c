/*7. Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
b) Find the sum of the elements above the leading diagonal. */
//MUHIT KHAN
//ROLL: 21052943

#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int r, int c)
{
    int i, j;
    int **arr = (int **)malloc(sizeof(int *) * r);
    for (i = 0; i < r; i++)
    {
        *(arr + i) = (int *)malloc(sizeof(int) * c);
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter Element[%d,%d]: ", i + 1, j + 1);
            scanf("%d", *(arr + i) + j);
        }
    }
    return arr;
}

void display_matrix(int **arr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
void display_diagonal_elements(int **arr, int r, int c)
{
    int i, j, count = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
                printf("%d  ", *(*(arr + i) + j));
        }
    }
}
int sum_diagonal_elements(int **arr, int r, int c)
{
    int i, j, sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
                sum += *(*(arr + i) + j);
        }
    }
    return sum;
}

int main()
{
    int r, c;
    printf("\nEnter the number of row: ");
    scanf("%d", &r);
    printf("Enter the number of column: ");
    scanf("%d", &c);
    int **arr = create_matrix(r, c);
    printf("\n\nYou entered the 2D Dynamic Arraay as: \n");
    display_matrix(arr, r, c);
    printf("\nLeading Diagonal Elements of the 2D Dynamic Arraay as: \n");
    display_diagonal_elements(arr, r, c);
    printf("\nSum of Leading Diagonal Elements: %d", sum_diagonal_elements(arr, r, c));
    return 0;
}