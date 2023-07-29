#include<stdio.h> not complete 
int main()
{
	int n;
	printf("enter then number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	int s;
	printf("enter then number: ");
	scanf("%d",&s);
	a[i]=s;
	}
	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
	if(a[i]==a[j]){
	printf("%d",s);
	}
	}
	}
	return 0;
}

