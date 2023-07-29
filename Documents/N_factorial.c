#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	while(i<n){
	for(int p=1; p<=n; p++){
	int fact=1;
	for(int j=p; j>=1; j--){
	fact=fact*j;
	}
	arr[i]=fact;
	i++;
	}
	}
	for(int i=0; i<n; i++){
	printf("%d ",arr[i]);
	}
	return 0;
}	
