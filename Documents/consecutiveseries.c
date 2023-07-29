#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int p=n;
	int sum1=0;
	int sum2=0;
	for(int i=1; i<=5; i++){
	while(i<=3){
	sum1=sum1+(p*p);
	p=p+1;
	i=i+1;
	}
	sum2=sum2+(p*p);
	p=p+1;
	i=i+1;
	}if(sum1==sum2){
	while(n<=p){
	printf("%d",n);
	n=n+1;
	}
	}
	return 0;
}
	
	
