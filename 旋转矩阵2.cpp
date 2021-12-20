#include<stdio.h>
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int N;
	scanf("%d",&N);
	int c[N][N];
	int i,l,a=0;
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			scanf("%d",&c[i][l]);
		}
	}
	for(i=1;i<N;i++){
		for(l=0;l<N/2;l++){
			a=c[i][l];
			c[i][l]=c[l][i];
			c[l][i]=a;
		}
	}
	for(i=0;i<N;i++){
		for(l=0;l<=N/2;l++){
			a=c[i][l];
			c[i][l]=c[i][N-l-1];
			c[i][N-l-1]=a;
		}
	}
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			printf("%3d ",c[i][l]);
		}
		printf("\n");
	}
	fclose(stdin);
    fclose(stdout);
	return 0;
} 
