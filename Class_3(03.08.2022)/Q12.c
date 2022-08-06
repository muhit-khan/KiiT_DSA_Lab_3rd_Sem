//12.WAP to add two distances (in km-meter) by passing structure to a function.
//MUHIT KHAN
//Roll: 21052943

#include<stdio.h>
#include<conio.h>

void addition(struct dist, struct dist, struct dist *);

struct dist
{
  int km; 
  int m; 
};

int main()
{
  struct dist d1, d2, d3;
  printf("Enter KM and Meter for 1st system: ");
  scanf("%d%d", &d1.km, &d1.m);
  printf("\nEnter KM and Meter for 2nd system: ");
  scanf("%d%d", &d2.km, &d2.m);
  addition(d1, d2, &d3);
  printf("\nAddition of two systems is %d ft %d in", d3.km, d3.m);
  return 0;
}

void addition(struct dist dd1,struct dist dd2,struct dist *dd3)
{
  (*dd3).km=dd1.km+dd2.km;
  (*dd3).m=dd1.m+dd2.m;
  if((*dd3).m>=1000)
  {
    (*dd3).km++;
    (*dd3).m-=1000;
  }
}