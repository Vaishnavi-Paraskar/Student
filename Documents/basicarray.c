#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	int b;
	scanf("%d",&b);
	a[i]=b;
	}
	for(int i=0; i<n; i++){
	printf("a[%d]: %d\n",i,a[i]);
	}
	return 0;
}
