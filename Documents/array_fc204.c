#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int c=0;
	int a[n];
	int p[n];
	for(int i=0; i<n; i++){
	int k;
	printf("enter the number k: ");
	scanf("%d",&k);
	a[i]=k;
	}
	int i=0,j;
	int b=a[i];
	for(j=0; j<n; j++){
	p[j]=b;
	b=b+1;
	}
	for(int i=0; i<n; i++){
	if(a[i]==p[i]){
	c=c+1;
	}
	}
	if(c==n){
	printf("array is consecutive\n");
	}else{
	printf("array is not consecutive\n");
	}
	return 0;
}
	
	
	
	
