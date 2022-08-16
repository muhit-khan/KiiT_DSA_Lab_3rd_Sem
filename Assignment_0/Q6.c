//6 WAP to multiply two matrices and display it.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], mult[3][3], i, j;
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("Enter element a[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("Enter element b[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for(i=0;i<3;i++) {    
        for(j=0;j<3;j++) {    
            mult[i][j]=0;    
            for(int k=0;k<3;k++)
                mult[i][j]+=a[i][k]*b[k][j];   
        }    
    }    
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d   ", mult[i][j]);
            if (j == 3 - 1) {
                printf("\n\n");
            }
        }
    return 0;
}