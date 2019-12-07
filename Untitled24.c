#include<stdio.h>
main()
{
	int n;
	printf("\n enter n value :");
	scanf("%d",&n);
	if(n>=0 && n<10)
	  printf("\n 1 digit");
	else if(n<100)
	  printf("\n 2 digit");
	else if(n<1000)
	  printf("\n 3 digit");
	else
	  printf("\n 4 digit");
}
