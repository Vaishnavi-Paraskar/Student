#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
	int b;
	printf("enter the weight of baby: ");
	scanf("%d",&b);
	a[i]=b;
	}
	int sum=0;
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0; i<n; i++){
	sum=sum+a[i];
	if(a[i] > max){
	max=a[i];
	}else if(a[i] < min){
	min=a[i];
	}
	}
	printf("max: %d\nmin: %d\n",max,min);
	int mean=sum/n;
	printf("mean: %d\n",mean);
	return 0;
}
	
