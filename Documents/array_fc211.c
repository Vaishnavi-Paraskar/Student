#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a[n];
	int i=0,j=1,c=0;
	while (j<=n){
	if(n%j==0){
	a[i]=j;
	c=c+1;
	j++;
	i++;
	}else{
	j++;
	}
	}
	for(int i=0; i<c; i++){
	printf("%d\n",a[i]);
	}
	return 0;
}
	
	
