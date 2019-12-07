#include<stdio.h>
main()
{
	int n;
	printf("\n enter n value :");
	scanf("%d",&n);
	if(n>=0 && n<=9)
	  printf("\n 1 digit");
	if(n>=10 && n<=99)
	  printf("\n 2 digit");
	if(n>=100 && n<=999)
	  printf("\n 3 digit");
	if(n>=1000 && n<=9999)
	  printf("\n 4 digit");
}
