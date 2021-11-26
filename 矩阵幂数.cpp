#include<stdio.h>
int main(){
	int N,k;
	scanf("%d %d",&N,&k);
	long long int a[N][N],b[N][N],c[N][N];
	int i,l,m,n=k;
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			b[i][l]=0;c[i][l]=0;
		}
	}
	long long int d[N];
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			scanf(" %lld",&a[i][l]);
		}
	}
	for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			for(m=0;m<N;m++){
				d[m]=a[i][m]*a[m][l];
				b[i][l]+=d[m];
			}
		}
	}
	for(;k>2;k-=2){
			for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			c[i][l]=0;
			for(m=0;m<N;m++){
				d[m]=b[i][m]*a[m][l];
				c[i][l]+=d[m];
			}
		}
	}
		if((k-1)>2){
			for(i=0;i<N;i++){
		for(l=0;l<N;l++){
			b[i][l]=0;
			for(m=0;m<N;m++){
				d[m]=c[i][m]*a[m][l];
				b[i][l]+=d[m];
			}
		}
	}
		}
	}
	if(n==1){
		for(i=0;i<N;i++){
			for(l=0;l<N;l++){
				printf("%lld ",a[i][l]);
			}
			printf("\n");
		}
	}else if(n%2==0){
		for(i=0;i<N;i++){
			for(l=0;l<N;l++){
				printf("%lld ",b[i][l]);
			}
			printf("\n");
		}
	}else if(n%2==1){
	for(i=0;i<N;i++){
			for(l=0;l<N;l++){
				printf("%lld ",c[i][l]);
			}
			printf("\n");
		}
		}
}
