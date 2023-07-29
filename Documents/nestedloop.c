                     
/*
// nested loop patterns:-  
// 5)
		1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i;
	for (i=1; i<=n; i++){              
	int j;
	for (j=1; j<=i; j++){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}
*/
/*
// 6)
	        1
		2 2
		3 3 3
		4 4 4 4
		5 5 5 5 5
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i;
	for (i=1; i<=n; i++){              
	int j;
	for (j=1; j<=i; j++){
	printf("%d ",i);
	}
	printf("\n");
	}
	return 0;
}
*/

/*
// 7)		
		5 4 3 2 1
		5 4 3 2
		5 4 3
		5 4 
		5
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i;
	for (i=1; i<=n; i++){
	int j;
	for (j=n;j>=i; j--){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}
*/
/*
// 8) 
		1 2 3 4 5
		1 2 3 4
		1 2 3 
		1 2 
		1
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int i;
	int k=n;
	for (i=1; i<=n; i++){
	int j;
	for (j=1; j<=k; j++){
	printf("%d ",j);
	}
	printf("\n");
	k--;
	}
	return 0;
}
/*
/*
//9) 
		5 5 5 5 5
		4 4 4 4
		3 3 3
		2 2
		1
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("%d ",k);
	}
	printf("\n");
	k--;
	}
	return 0;
}
*/
/*
//10)
		* * * * *
		* * * *
		* * * 
		* * 
		*
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("* ");
	}
	printf("\n");
	k--;
	}
	return 0;
}
*/
/*	
//11) 
		5 5 5 5 5
		5 5 5 5
		5 5 5
		5 5
		5
#include<stdio.h>
int main()
{
		int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=n; j>=i; j--){
	printf("%d ",k);
	}
	printf("\n");
	}
	return 0;
}
*/	
/*
//12)	
		5 
		4 4 
		3 3 3
		2 2 2 2
		1 1 1 1 1
#include<stdio.h>
int main()
{
		int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
	printf("%d ",k);
	}
	printf("\n");
	k--;
	}
	return 0;
}
*/	
/*	
//13)
		1 
		2 1
		3 2 1
		4 3 2 1
		5 4 3 2 1
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=i; j>=1; j--){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}	
*/	
/*	
//14)
		1
		2  3 
		4  5  6
		7  8  9  10
		11 12 13 14  15
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
	printf("%d ",k);
	k++;
	}
	printf("\n");
	}
	return 0;
}	
*/	
/*	
//15)	
		1 
		2 3 4 
		5 6 7 8 9
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=1;
	int m=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=m; j++){
	printf("%d ",k);
	k++;
	}
	printf("\n");
	m+=2;
	}
	return 0;
}		
*/	
/*
//16)
		1 2 3 4 5
		1 2 3 4 5
		1 2 3 4 5
		1 2 3 4 5
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=5;
	int m=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}
*/
/*		
//17) 	
		1 1 1 1 1 
		2 2 2 2 2
		3 3 3 3 3
		4 4 4 4 4			
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=5;
	int m=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("%d ",i);
	}
	printf("\n");
	}
	return 0;
}
*/
/*
//18)
		* * * * *
		* * * * *
		* * * * *
		* * * * *
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=5;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}
*/
/*
//19)
		1
		4  4
		9  9  9
		16 16 16 16
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
	printf("%d ",i*i);
	}
	printf("\n");
	}
	return 0;
}
*/
/*
//20)
		1 
		3 3
		5 5 5 
		7 7 7 7
		9 9 9 9 9
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int m=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
	printf("%d ",m);
	}
	printf("\n");
	m+=2;
	}
	return 0;
}
*/
/*
//21)
		0
		0 1
		0 1 2
		0 1 2 3
		0 1 2 3 4
		0 1 2 3 4 5
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
	for(int j=0; j<=i; j++){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}
*/
/*
//22)	
	1
	1 2 1
	1 2 3 2 1
	1 2 3 4 3 2 1
	1 2 3 4 5 4 3 2 1
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=1;
	for(int i=1; i<=n; i++){
	int c=i;
	for(int j=1; j<=k; j++){
	if(j<i){
	printf("%d ",j);
	}else{
	printf("%d ",c);
	c=c-1;
	}
	}
	printf("\n");
	k=k+2;
	}
	return 0;
}
*/

/*
//23)
	1
	1 1
	1 2 1
	1 3 3 1
	1 4 6 4 1
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
	int s=1;
	for(int j=0; j<=i; j++){
	printf("%d ",s);
	s=(s*(i-j))/(j+1);
	}
	printf("\n");
	}
	return 0;
}
*/	
/*
	* * * * *
	 * * * *
	  * * *
	   * *
	    *
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	if(j<i){
	printf(" ");
	}else{
	printf("* ");
	}
	}
	printf("\n");
	}
	for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	if(j<=(n-i)){
	printf(" ");
	}else{
	printf("* ");
	}
	}
	printf("\n");
	}
	return 0;
}
*/
/*

	* * * * *
	* * * *
	* * *
	* *
	*
	*
	* *
	* * *
	* * * *
	* * * * *
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int k=n;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=k; j++){
	printf("* ");
	}
	printf("\n");
	k=k-1;
	}
	int p=1;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=p; j++){
	printf("* ");
	}
	printf("\n");
	p=p+1;
	}
	return 0;
}
*/
/*
		1  2  3  4  5
		10 9  8  7  6
		11 12 13 14 15
		20 19 18 17 16
		21 22 23 24 25
		30 29 28 27 26
#include<stdio.h>
int main()
{
	int n=5;
	int c=0;
	for(int i=0; i<5; i++){
	for(int j=0; j<5; j++){
	if(i%2==0){
	c=c+1;
	printf("%d ",c);
	}else{
	printf("%d ",c);
	c=c-1;
	}
	}
	c=c+5;
	printf("\n");
	}
	return 0;
}
	




























































