//7 WAP to find the Trace(sum of the diagonal element) of a given mxn matrix
//Muhit Khan
//Roll: 21052943
 
#include<stdio.h>
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	} 
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
 	return 0;
}