#include<stdio.h>
#include<conio.h>
 
void main()
{
	int a,b,c;
printf("enter 3 angles");
scanf("%d%d%d",&a,&b,&c);

	if(a==b || b==c || a==c)
		printf("isoscales tri formed");
	else
		printf("isoscales tri is not formed");

	getch();
}