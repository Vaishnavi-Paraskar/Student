// all 3 digit armstrong numbers

#include<stdio.h>
int main()
{
	int n=1000;
	int i=100;
	while(i<n){
	int sum=0;
	int a=i;
	while(a!=0){
	int r=a%10;
	sum=sum+(r^3);
	a=a/10;
	}if(sum==i){
	printf("%d\n",i);
	i=i+1;
	}else{
	i=i+1;
	}
	return 0;
}
