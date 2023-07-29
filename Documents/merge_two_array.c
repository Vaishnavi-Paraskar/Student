// merge two unsorted array and print them in sorted array.

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int b[n];
	for(int i=0; i<n; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		b[i]=k;
	}
	int m;
	printf("enter the number: ");
	scanf("%d",&m);
	int a[m];
	for(int i=0; i<m; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		a[i]=k;
	}
	int k=n+m;
	int p[k];
	int t=0;
		for(int j=0; j<n; j++)
		{
			p[t]=b[j];
			t++;
		}
		for(int j=0; j<m; j++)
		{
			p[t]=a[j];
			t++;
		}
		for(int i=0; i<k-1; i++)
		{
			int temp=0;
			for(int j=0; j<k-i-1; j++)
			{
				if(p[j]>p[j+1])
				{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				}
			}
		}
		for(int i=0; i<k; i++)
		{
			printf("%d ",p[i]);
		}
return 0;
}
				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		 
