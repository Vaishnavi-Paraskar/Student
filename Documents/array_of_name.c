#include<stdio.h>
int main()
{
	char name[10][100];
	for(int i=0; i<4; i++)
	{
		printf("enter the name: ");
		scanf("%s",name[i]);
	}
	for(int i=0; i<4; i++)
	{
		printf("%s ",name[i]);
	}
	return 0;
}
