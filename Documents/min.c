#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[7]={-10,-4,-200,-80,-19,-5,-12};
	int min=INT_MAX;
	for(int i=0; i<7; i++){
	if(min > arr[i]){
	min=arr[i];
	    }
	}
	printf("min: %d\n",min);
	return 0;
}
	

