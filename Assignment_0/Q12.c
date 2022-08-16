//WAP to print the numbers which are divisible by 7 and 13 within a range
//Muhit Khan
//Roll: 21052943
 
#include<stdio.h>
int main()
{
    int init, fin;
    printf("Enter two integer of range: ");
    scanf("%d %d", &init, &fin);
    printf("Numbers divisible by 7 and 13 are: ");
    for(int i = init; i <= fin; i++)
        if(i%7==0 && i%13==0)
            printf("%d ", i);
    return 0;
}