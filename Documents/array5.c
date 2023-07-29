// given arras in reverse order

#include<stdio.h>
int main()
{
	int a[6]={5,4,3,2,1,0};
	int n=6;
	int b[n];
	int j=0;
	for(int i=n-1; i>=0; i--){
	b[j]=a[i];
	j=j+1;
	}
	for(int j=0; j<n; j++){
	printf("%d\n",b[j]);
	}
	return 0;
}
	
