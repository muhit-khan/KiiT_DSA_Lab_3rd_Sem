/*10.WAP to swap all the elements in the 1st column with all the corresponding
elements in the last column, and 2nd column with the second last column
and 3rd with 3rd last etc. of a 2-D dynamic array. Display the matrix.*/
//MUHIT KHAN
//Roll: 21052943
#include <stdio.h>

int main()
{
    static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
        printf("Enter no. of rows: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix: \n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                 printf("Enter a[%d][%d] value: ",i,j);
                 scanf("%d", &array1[i][j]);
                 array2[i][j] = array1[i][j];
            }
    printf("\nThe given matrix is \n\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
                printf("\t%d", array1[i][j]);
            printf("\n\n");
        }
    for(a = 0, b = n-1; a < n/2; a++, b--)
        for (i = 0; i < m; ++i)
        {
            c = array1[a - 1][i];
            array1[a - 1][i] = array1[b - 1][i];
            array1[b - 1][i] = c;
        }
    for(p = 0, q = n-1; a < n/2; p++, q--)
    for (i = 1; i < n; ++i)
    {
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
    }
    printf("\nThe matix after interchanging the two rows ::  \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            printf("\t%d", array1[i][j]);
        printf("\n\n");
    }
    printf("\nThe matix after interchanging the two columns :: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            printf("\t%d", array2[i][j]);
        printf("\n\n");
    } 
    return 0;
}