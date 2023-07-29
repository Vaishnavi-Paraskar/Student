#include<stdio.h>
int main()
{
	int n,j;
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
	for(int i=1; i<n; i++)
	{
		int temp=a[i];
		for(int j=i-1; j>=0; j--)
		{
			if(a[j]>temp)
			{
			a[j+1]=a[j];
			a[j]=temp;
			}
		}
		
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
		
