#include<stdio.h>
int main()
{
	int i,j,sum=1,n;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",sum);
			sum++;
		}
		printf("\n");
	}return 0;
}
