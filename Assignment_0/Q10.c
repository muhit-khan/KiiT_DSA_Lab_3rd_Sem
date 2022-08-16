//10. WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.
//Muhit Khan
//Roll: 21052943
 
#include<stdio.h>  
int fact(int n)  
{  
    if (n == 0)  
        return 1;  
    else  
        return(n * fact(n-1));  
}  
int main()  
{  
    int number;    
    printf("Enter a number: ");  
    scanf("%d", &number);
    printf("Factorial of %d is %ld\n", number, fact(number));  
    return 0;  
}