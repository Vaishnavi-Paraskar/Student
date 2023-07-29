#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the number m: "); 
	scanf("%d",&m);
	printf("enter the number n: "); 
	scanf("%d",&n);
	int p[m][n];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			int a;
			printf("enter the element: ");
			scanf("%d",&a);
			p[i][j]=a;
		}
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	
	
	
