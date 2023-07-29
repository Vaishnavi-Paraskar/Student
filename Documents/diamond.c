#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n-1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	if(j<=k){
	printf(" ");
	}else{
	printf("* ");
	}
	}
	k=k-1;
	printf("\n");
	}
	for(int i=1; i<n; i++){
	for(int j=1; j<=n; j++){
	if(j<=i){
	printf(" ");
	}else{
	printf("* ");
	}
	}
	printf("\n");
	}
	return 0;
	
}
