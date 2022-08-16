//15. Count frequency of each character in a string.
//Muhit Khan
//Roll: 21052943
 
#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i;
  	int freq[256] = {0};
  	printf("\nPlease Enter any String:  ");
  	gets(str);
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		freq[str[i]]++;
	}
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			printf("Character '%c' Occurs %d Times \n", i, freq[i]);
		}
	}
  	return 0;
}