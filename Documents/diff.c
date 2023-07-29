int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,S,max=-1;
	    scanf("%d %d",&N,&S);
	    for(int j=0; j<=N; j++){
	        for(int p=0; p<=N; p++){
	        if((j+p)==S){
	            if((j-p)>max){
	                max=j-p;
	            }
	       }
	    }
	  }
	  printf("%d\n",max);
	}
	return 0;
}

