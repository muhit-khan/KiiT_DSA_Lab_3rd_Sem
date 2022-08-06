/*5. WAP to read a number and delete the even location digit of that number.Example : 
i) input 1234. output is 13.
ii) input 357 output is 37
iii) input 7637272 output is 7322 */
//MUHIT KHAN
//Roll: 21052943

#include <stdio.h>

int dlt_even_digit(int number)
{
    int r, result = 0, i = 1, j = 1; // r = remainder, result = result, i = iterator, j = multiplier
    while (1) // infinite loop
    {
        if (number)
        {
            r = number % 10; // remainder
            number = number / 10; // number
            if (i % 2 != 0)
            {
                result += r * j; // result
                j *= 10; // multiplier
            }
            i++; // iterator
        }
        else
            break; // break the loop
    }
    return result; // return the result
}
int main()
{
    long int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The number after deleting even digits: %d", dlt_even_digit(n));
    return 0;
}
