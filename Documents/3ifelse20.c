#include<stdio.h>
int main()
{
	int ab,bc,ac,p,q,r;
	printf("enter the value of ab: ");
	scanf("%d",&ab);
	printf("enter the value of ab: ");
	scanf("%d",&bc);
	printf("enter the value of ab: ");
	scanf("%d",&ac);
	p=ab*ab;
	q=bc*bc;
	r=ac*ac;
	if(ab>0 && bc>0 && ac>0){
		if(ab+bc > ac || bc+ac > ab || ab+ac > bc){
			if(ac==bc==ac){
				printf("Equilateral Tringle\n");
				}
				else if(ab==bc||bc==ac||ac==ab)
				{
					printf("Isoscalene Triangle\n");
				}
				else if(p==q+r||q==p+r||r==p+q)
				{
				printf("Right angled Triangle\n");
				}
				else
				{
				printf("Scalen Triangle\n");
				}
			}
			else
			{
				printf("Invalid\n");
			}
		}
		else
		{
			printf("Invalid\n");
		}
return 0;
}
		
		
		
		
		
		
		 
