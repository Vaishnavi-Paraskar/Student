#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	int c=2;
	for(int i=0; i<n; i++){
	a[i]=c;
	c=c+2;
	}
	for(int i=0; i<n; i++){
	printf("%d\n",a[i]);
	}
	return 0;
}
	
	
	
	
