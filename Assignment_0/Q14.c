//14. WAP to find the position of substring in a given string.
//Muhit Khan
//Roll: 21052943
 
#include<stdio.h>
#include<string.h>
int main()
{
    char s[30], t[20];
    char *found;
    puts("Enter the first string: ");
    gets(s);
    puts("Enter the sub-string to be searched: ");
    gets(t);
    found=strstr(s,t);
    if(found)
        printf("Sub-string is found in the First String at %d position.\n", found-s);
     else
        printf("-1");
    return 0;
}