//WAP to replace all vowels from a string with its immediate consonant.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "ilovecoding";
    int length = sizeof(s)/sizeof(s[0]);
    for (int i = 0; i < length; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            s[i] = (char)(s[i] + 1);
    }
    printf("Modified sring: %s", s);
    return 0;
}