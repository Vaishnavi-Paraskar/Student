#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=1,R,q;
	int t=0;
	int a[n],C=0;
	while(k<=n)
	{
	int p=k;
	int count=0;
	while(p!=0)
	{
		R=p%10;
		count++;
		p=p/10;
	}
	int b=k;
	int sum=0;
	while(b!=0)
	{
		q=b%10;
		sum=sum+(pow(q,count));
		b=b/10;
	}
	if(sum==k)
	{
		a[t]=k;
		t=t+1;
		C=C+1;
	}
	k=k+1;
	}
	for(int i=0; i<C; i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}
	
		
