
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int c=0;
	int p=n;
	while(p!=0){
	int r=p%10;
	c=c+1;
	p=p/10;
	}
	printf("count: %d\n",c);
	float sum=0;
	int m=n;
	while(m!=0){
	int q=m%10;
	sum=sum+(pow(q,c));
	m=m/10;
	}if(sum==n){
	printf("n is armstrong no\n");
	}else{
	printf("n is not armstrong no\n");
	}
	return 0;
}
