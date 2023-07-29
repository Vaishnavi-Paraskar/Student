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
		int temp=0;
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
return 0;
}
