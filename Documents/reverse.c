#include<stdio.h>
 void reverse(int a[]){
	int i=0;
	int j=6;
	while(i<j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	i++;
	j--;
	}
	return;
}
int main()
{	
	int a[7]={1,2,3,4,5,6,7};
	reverse(a);
	for(int i=0; i<7; i++){
	printf("%d ",a[i]);
	}
	return 0;
}	
