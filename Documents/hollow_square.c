/*
#include<stdio.h>
int main()
{
	int n,j;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		if(i==1)
		{
			for(j=1; j<=n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}else if(i==n)
		{
		int j;
			for(j=1; j<=n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}else{
		for(int j=1; j<=n; j++)
		{
			if(j==1)
			{
				printf("* ");
			}else if(j==n)
			{
				printf("* ");
				printf("\n");
			}else{
			printf("  ");
			}
		}
		    }
	}
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int n,m,j;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1; i<=n; i++)
	{
		if(i==1)
		{
			for(j=1; j<=m; j++)
			{
				printf("* ");
			}
			printf("\n");
		}else if(i==n)
		{
		int j;
			for(j=1; j<=n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}else{
		for(int j=1; j<=n; j++)
		{
			if(j==1)
			{
				printf("* ");
			}else if(j==n)
			{
				printf("* ");
				printf("\n");
			}else{
			printf("  ");
			}
		}
		    }
	}
	return 0;
}			
	
