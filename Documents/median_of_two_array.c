#include<stdio.h>      (not complete)
int main()
{
	int m;
	printf("enter the number: ");
	scanf("%d",&m);
	int a[m];
	for(int i=0; i<m; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		a[i]=k;
	}
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int b[n];
	for(int i=0; i<n; i++)
	{
		int k;
		printf("enter the element: ");
		scanf("%d",&k);
		b[i]=k;
	}
	int p=m+n;
	int z[p];
	int t=0;
	for(int i=0; i<m; i++)
	{
		z[t]=a[i];
		t=t+1;
	}
	for(int i=0; i<n; i++)
	{
		z[t]=b[i];
		t=t+1;
	}
	for(int i=0; i<p; i++)
	{
		printf("%d ",z[i]);
	}
	int median;
	int L=0;
	int H=p-1;
	if(n%2==0){
	int m=(L+H)/2;
	int s=m+1;
	float median=(z[m]+z[s])/2.0;
	printf("median: %f\n",median);
	}else{
	float median=(z[L]+z[H])/2.0;
	printf("median: %f\n",median);
	}
return 0;
}
	
	
	
	
	
	
	
	
	
	
