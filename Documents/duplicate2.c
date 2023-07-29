#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		a[i]=k;
	}
	for(int i=0; i<n; i++)
	{
		int c=1;
		for(int j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			printf("%d\n",a[i]);
		}
	}
return 0;
}
				
	
