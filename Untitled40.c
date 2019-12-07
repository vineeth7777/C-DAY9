#include<stdio.h>
main()
{
	int n,r;
	printf("\n enter n value:");
	scanf("%d",&n);
	printf("\n reverse number:");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
	}
}
