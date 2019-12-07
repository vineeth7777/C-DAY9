#include<stdio.h>
main()
{
	int year;
	printf("\n enter year :");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0|| year%400==0)
	 printf("\n is leap year");
	else
	 printf("\n not a leap yr");
}
