#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	int b;
	printf("enter a number b: ");
	scanf("%d",&b);
	a[i]=b;
	}
	for(int i=0; i<n; i++){
	int p=a[i];
	int c=0;
	while(p!=0){
	int r=p%10;
	c=c+1;
	p=p/10;
	}
	printf("count: %d\n",c);
	int m=a[i];
	int sum=0;
	while(m!=0){
	int q=m%10;
	sum=sum+(pow(q,c));
	m=m/10;
	}
	if(sum==a[i]){
	printf("%d is armstrong number\n",a[i]);
	}else{
	printf("%d is not armstrong number\n",a[i]);
	}
	}
	return 0;
}
