//WAP to find the factorial of a number n by writing a recursive function for it.
//MUHIT KHAN
//Roll: 21052943

#include<stdio.h>

int fact(int num)
{
    if( num == 0)
        return 1;
    return num * fact(num -1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial: %d", fact(n));
    return 0;
}