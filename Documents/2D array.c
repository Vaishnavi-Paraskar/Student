#include<stdio.h>
int main()
{
        int m,n;
        printf("enter the number of rows: ");
        scanf("%d",&m);
        printf("enter the number of columns: ");
        scanf("%d",&n);
        int p[m][n];
        for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                        int b;
                        printf("enter the element: ");
                        scanf("%d",&b);
                        p[i][j]=b;
                }
        }
        for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                        printf("%d ",p[i][j]);
                }
        }
}