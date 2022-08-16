//5 WAP to add two matrices and display it.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>
int main()
{
    int r, c, a[4][4], b[4][4], sum[4][4], i, j;
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) {
            printf("Enter element a[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) {
            printf("Enter element b[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == 4 - 1) {
                printf("\n\n");
            }
        }
    return 0;
}
