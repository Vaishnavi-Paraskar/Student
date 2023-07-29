#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	int b;
	printf("enter the number b: ");
	scanf("%d",&b);
	a[i]=b;
	}
	int sum=0;
	for(int i=0; i<n; i++){
	sum=sum+a[i];
	}
	printf("sum: %d\n",sum);
	printf("average: %d\n",sum/n);
	return 0;
}
	
	
