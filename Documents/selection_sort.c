// Selection sort (Assending order)

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
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		int temp=0;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
return 0;
}
	
		
