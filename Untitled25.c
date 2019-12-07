#include<stdio.h>
main()
{
	int a,b,ch;
	printf("\n enter two valus");
	scanf("%d%d",&a,&b);
	printf("\n 1.Addition \n 2.sub \n 3.mul \n 4.div");
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n sum :%d",a+b);break;
		case 2:printf("\n sub :%d",a-b);break;
		case 3:printf("\n mul :%d",a*b);break;
		case 4:printf("\n div :%d",a/b);break;
		default:printf("\n invaild");
	}
}
