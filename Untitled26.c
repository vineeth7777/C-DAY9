#include<stdio.h>
main()
{
	char ch;
	printf("\n enter an alpha");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("\n vowel :");break;
		case 'e':printf("\n vowel :");break;
		case 'i':printf("\n vowel :");break;
		case 'o':printf("\n vowel:");break;
		case 'u':printf("\n vowel :");break;
		default:printf("\n consonant");
	}
}
