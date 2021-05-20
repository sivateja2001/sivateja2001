#include<stdio.h>
void main()
{
	char opt;
	int a,b;
	printf("enter the arthemetic operators(  +,-,*,%,/  )");
	scanf("%c",&opt);
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	switch(opt)
	{
		case '+':
		printf("%d+%d=%d",a,b,a+b);
		break;
		case '-':
		printf("%d-%d=%d",a,a,a-b);
		break;
		case '*':
		printf("%d*%d=%d",a,b,a*b);
		break;
		case '/':
		printf("%d/%d=%d",a,b,a/b);
		break;
	}
}
