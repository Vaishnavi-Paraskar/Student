#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		a[i]=k;
	}
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	int p;
	printf("enter the number: ");
	scanf("%d",&p);
	int L=0;
	int H=n-1;
	int m=(L+H)/2;
	while(L<=H){
	if(a[m]==p){
	printf("%d ",a[m]);
	break;
	}else if(a[m]>p){
	H=m-1;
	}else{
	L=m+1;
	}
	m=(L+H)/2;
	}
	return 0;
}
