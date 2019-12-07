#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter three values :");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	 printf("\n all are equal");
	else if(a>b && a>c)
	 printf("\n %d a is big",a);
	else if(b>c)
	 printf("\n %d b is big,b);
	else
	 printf("\n %d c is big",c);
}
