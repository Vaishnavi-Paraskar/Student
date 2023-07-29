#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the number\n");
	scanf("%d",&b);
	getchar();
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	if(ch == '+'){
	printf("sum: %d\n",a+b);
	}else if(ch == '-'){
	printf("substraction: %d\n",a-b);
	}else if(ch == '*'){
	printf("multiplication: %d\n",a*b);
	}else if(ch == '/'){
	printf("division: %d\n",a/b);
	}else{
	printf("invalid input\n");
	}
	return 0;
}
