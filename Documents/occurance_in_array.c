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
	int c=0;
	for(int i=0; i<n; i++){
	int m=a[i];
	for(int j=i+1; j<n; j++){
	if(a[j]==m){
	c=c+1;
	}
	}
	}
	printf("occurance: %d\n",c);
	return 0;
}
	
