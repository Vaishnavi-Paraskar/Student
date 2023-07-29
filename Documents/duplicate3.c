#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		a[i]=k;
	}
	for(int i=0; i<n; i++){
		for(int 
