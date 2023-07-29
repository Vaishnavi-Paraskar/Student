#include<stdio.h>
int main()
{
	int N;
	int sum=0;
	printf("enter the number: ");
	scanf("%d",&N);
	int P=N;
	while(P!=0){
	int r=P%10;
	sum=(sum*10)+r;
	P=P/10;
	}
	if(sum==N){
	printf("%d is a palindrome number\n",N);
	}else{
	printf("%d is not a palindrome number\n",N);
	}
	return 0;
}
	
