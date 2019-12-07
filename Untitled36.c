#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the values:");
	scanf("%d%d%d",&a,&b,&c);
	printf(a==b && b==c ? "all are equal": a>b && a>c ? "a is big": b>c ? "b is big" : "c is big");
}
