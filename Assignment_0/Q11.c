//11. WAP to swap two numbers using call by reference.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;   
}
 
int main()
{
    int x, y;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
    swap(&x, &y); 
    printf("After Swapping\nx = %d\ny = %d\n", x, y);
    return 0;
} 