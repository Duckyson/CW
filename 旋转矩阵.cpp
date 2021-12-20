#include<stdio.h>



int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int N;
	scanf("%d",&N);
	int c[N][N];
	int i,l;
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			scanf("%d",&c[i][l]);
		}
	}
	int a,b,m=N-1,n=0,k;
	i=0;l=0;a=N-1;b=N-1;
	for(;i<a;i++,l++,a--,b--){
		for(n=0;n<m;n++){
			k=c[a-n][l];
			c[a-n][l]=c[a][b-n];
			c[a][b-n]=c[i+n][b];
			c[i+n][b]=c[i][l+n];
			c[i][l+n]=k;
		}
		m-=2;
	}
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			printf("%d ",c[i][l]);
		}
		printf("\n");
	}
	fclose(stdin);
    fclose(stdout);
	return 0;
}
