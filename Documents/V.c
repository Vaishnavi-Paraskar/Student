#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("* ");
	}
	printf("\n");
	k=k-1;
	}
	int p=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=p; j++){
	printf("* ");
	}
	p=p+1;
	printf("\n");
	}
	return 0;
}
