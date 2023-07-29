// print natural number till 20 

#include<stdio.h>
int main()
{
	int n=20;
	int array[n];
	int j=1;
	for(int i=0; i<n; i++){
	array[i]=j;
	j=j+1;
	}
	for(int i=0; i<n; i++){
	printf("array[%d] = %d\n",i,array[i]);
	}
	return 0;
}
