#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=1; i<=T; i++){
	    int N,M;
	    scanf("%d %d",&N,&M);
	    int A[N][M];
	    for(int i=0; i<N; i++){
	        for(int j=0; j<M; j++){
	            int k;
	            scanf("%d",&k);
	            A[i][j]=k;
	        }
	        }
	    int max=0,p=0;
	    for(int i=0; i<N; i++){
	        for(int j=0; j<M-1; j++){
	            int a=A[i][j]-A[i][j];
	            p=a;      
	            }
	        }
	        if(p>max){
	            max=p;
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}


