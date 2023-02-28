#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("enter 3 angles");
	scanf("%d%d%d",&a,&b,&c);
	
		if (a==60  &&  b==60  &&  c==60)
		{
			printf("equilateral tri is formed");
		}
		else
		{printf("equilateral tri is not formed");
		}
		getch();
}
