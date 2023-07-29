#include<stdio.h>                     (not complete)
int main()
{
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
	int r=0;
	int min=a[r];
	int t=0,C=0;
	int q=m+n;
	int p[q];
	int i=r+1,j=0;
	while(i<m)
	{
		while(j<n)
		{
		if(min>a[i])
		{
			min=a[i];
			i++;
		}
		if(min>b[j])
		{
			min=b[j];
			j++;
		}
		}
	}
	p[t]=min;
	t++;
	C++;
	for(int i=0; i<C; i++)
	{
		printf("%d\n",p[i]);
	}
return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
				
				
	
