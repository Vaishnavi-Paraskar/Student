#include<stdio.h>
int main()
{
	int n;
	char name[n][100];
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("enter the name: ");
		scanf("%s",name[i]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%s\n",name[i]);
	}
	return 0;
}
