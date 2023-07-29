#include<stdio.h>
int main()
{
	int n=1000;
	for(int i=100; i<n; i++){
	int a=i;
	int sum=0;
	while(a!=0){
	int r=a%10;
	int fact=1;
	for(int j=1; j<=r; j++){
	fact=fact*j;
	}
	sum=sum+fact;
	a=a/10;
	}
	if(sum==i){
	printf("%d\n",i);
	}
	}
	return 0;
}
	
