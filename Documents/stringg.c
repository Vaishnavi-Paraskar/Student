#include<stdio.h>          some mistake
int main()
{
	char str[40];
	printf("enter a string");
	scanf("%s",str);
	// size 
	int size=0;
	int k=0;
	while(str[k]!='\0')
	{
		size++;
		k++;
	}
	int j;
	for(int i=0; j=size-1; i<=j; i++,j--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	
	puts("the reverse string is : ");
	puts(str);
	return 0;
}
	
