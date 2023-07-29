#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the number: ");
	scanf("%d",&m);
	printf("enter the number: ");
	scanf("%d",&n);
	int a[m][n];
	int p[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			int k;
			printf("enter the element: ");
			scanf("%d",&k);
			a[i][j]=k;
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			p[j][i]=a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
