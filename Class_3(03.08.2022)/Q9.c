//9. WAP by designing a recursive function to calculate the sum of all even digits of any given integer.
//MUHIT KHAN
//Roll: 21052943

#include <stdio.h>

int sum_even_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_even_digit(n / 100));
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of even digits: %d", sum_even_digit(n));
    return 0;
}