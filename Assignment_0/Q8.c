//8 WAP to find out the sum of the elements stored in a matrix.
//Muhit Khan
//Roll: 21052943
 
#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3], i, j, sum=0;
    printf("Enter all 9 elements of 3*3 Matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("\nSum of all elements = %d", sum);
    return 0;
}