#include<stdio.h>
#include<string.h>
main()
{
	int i,len=0,j;
	char s1[50],s2[20];
	printf("enter the string str1 :");
	gets(s1);
	printf("enter another string str2");
	gets(s2);
	for(i=0;s1[1]!='0';i++)
	len++;
	for(j=0;s2[j]!='0';len++,j++)
	{
		s1[len]=s2[j];	
	}
	s1[len]='\0';
	printf("concatenate string is :%s",s1);
}
