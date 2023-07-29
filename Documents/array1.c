// Create Array of First 10 odd Numbers

#include<stdio.h>
int main()
{	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int A[n];
	int j=1;
	for(int i=0; i<n; i++){
	A[i]=j;
	j=j+2;
	}
	for(int i=0; i<n; i++){
	printf("A[%d]: %d\n",i,A[i]);
	}
	return 0;
}
