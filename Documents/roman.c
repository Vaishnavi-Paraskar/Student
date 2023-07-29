#include<stdio.h>
int main()
{
    int n=7;
    char str[]={'M','D','C','L','X','V','I'};
    int s[]={1000,500,100,50,10,5,1};
    int k;
    printf("enter the decimal number: ");
    scanf("%d",&k);
    while(k>0){
        for(int i=0; i<n; i++){
            if(k>=s[i]){
                printf("%c",str[i]);
                k=k-s[i];
                break;
            }
        }
    }
    return 0;
}
