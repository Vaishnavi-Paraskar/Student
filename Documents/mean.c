#include<stdio.h>         
int main()
{
	int p[6]={1,2,3,4,5,5};
	int sum=0;
	int mode;
	for(int i=0; i<6; i++){
	sum=sum+p[i];
	}
	float mean=sum/6.0;
	printf("mean: %lf\n",mean);
	int L=0;
	int H=5-1;
	if(5%2==0){
	int m=(L+H)/2;
	int s=m+1;
	float median=(p[m]+p[s])/2.0;
	printf("median: %f\n",median);
	}else{
	float median=(p[L]+p[H])/2.0;
	printf("median: %f\n",median);
	}
	int k=0;
	for(int i=0; i<(6-1); i++){
	int c=0;
	for(int j=i+1; j<6; j++){
	if(p[i]==p[j]){
	c=c+1;
	}
	}
	if(c>k){
	k=c;
        mode=p[i];
	}
	}
	printf("mode: %d\n",mode);
	return 0; 
}
	
