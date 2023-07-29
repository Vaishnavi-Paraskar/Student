#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	int m=k*2;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=(n*2); j++){
	if(j<=i){
	printf("* ");
	}else if(j<m){
	printf("  ");
	}else{
	printf("* ");
	}
	}
	m=m-1;
	printf("\n");
	}
	int i;
	for(i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	if(j<=k){
	printf("* ");
	}else{
	printf("  ");
	}
	}
	for(int j=1; j<=n; j++){
	if(j<i){
	printf("  ");
	}else{
	printf("* ");
	}
	}
	k=k-1;
	printf("\n");
	}
	return 0;
}
	
