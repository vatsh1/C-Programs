#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c;
	printf("Enter the values of a,b and c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
	if(a>c)
	{
	printf("a is largest");
}
else
{
	printf("c is largest");
}
}
else
{
  if (b>c)
  {
printf("b is largest ");
}
else
{
	printf("c is largest");
	}
	}
	getch();
	return EXIT_SUCCESS;
	}

