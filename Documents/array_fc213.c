#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	int c=0,i=0;
	for(int k=1; k<=n; k++){
	int j=1,sum=0;
	while(j<k){
	if(k%j==0){
	sum=sum+j;
	j=j+1;
	}else{
	j=j+1;
	}
	}
	if(sum==k){
	a[i]=k;
	i=i+1;
	c=c+1;
	}
	}
	for(int i=0; i<c; i++){
	printf("arr[%d]: %d\n",i,a[i]);
	}
	return 0;
}
	
