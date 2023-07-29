#include<stdio.h>
int main()
{
	int a,b,percentage;
	printf("enter the number of classes held\n");
	scanf("%d",&a);
	printf("enter the number of classes attended\n");
	scanf("%d",&b);
	percentage=(b*100)/a;
	printf("percentage: %d\n",percentage);
	if (percentage >= 75){
	printf("student allowed to sit in exam\n");
	}else{
	printf("student not allowed to sit in exam\n");
	}
	return 0;
}
	
	
