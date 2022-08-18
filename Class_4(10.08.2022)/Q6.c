//6.WAP to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order.
//MUHIT KHAN
//Roll: 21052943
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    printf("Array Size(Rows & Column): ");
    scanf("%d %d", &m, &n);
    int **arr = (int **)malloc(m*sizeof(int *));
    for(int i = 0; i<m; i++)
        *(arr+i) = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            printf("Element-%d,%d: ", i+1, j+1);
            scanf("%d", (*(arr+i)+j));
        }
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
                for (int k = j + 1; k < n; k++)
                    if (arr[i][j] > arr[k][j])
                    {
                        int a = *(*(arr+i)+j);
                        *(*(arr+i)+j) = *(*(arr+k)+j);
                        *(*(arr+k)+j) = a;
                    }
        }
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            printf("%d ", *(*(arr+i)+j));
            if(j == n-1)
                printf("\n");
        }
    return 0;
}