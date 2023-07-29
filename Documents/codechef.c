// The Last Levels.

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=1; i<=T; i++){
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X<=3){
	        printf("%d\n",(X*Y));
	    }else if(X%3==0){
	        int A=X/3;
	        printf("%d\n",(X*Y)+(A*Z)-Z);
	    }else{
	        int B=X%3;
	        int A=X-B;
	        int P=X/3;
	        printf("%d\n",(A*Y)+(Z*P)+(B*Y));
        	}
	}
	return 0;
}


