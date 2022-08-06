//8.WAP to find the LCM of two numbers a and b by using a suitable function (say LCM) for this.
//MUHIT KHAN
//Roll: 21052943


#include <stdio.h>

int gcd(int x, int y)
{
	if (x == 0)
		return y;
	return gcd(y % x, x);
}
int lcm(int x, int y)
{
	return (x / gcd(x, y)) * y;
}
int main()
{
	int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);
	printf("LCM of %d and %d is %d ", x, y, lcm(x, y));
	return 0;
}