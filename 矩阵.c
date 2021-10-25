#include<stdio.h>
int main(){
	int i=0,l=0,M=100,N=100,j=1;
	int a[M] [N];
	scanf("%d %d",&M,&N);
	a[0] [0]=1;
	while(a[M-1] [N-1]==0){
		if(l==0&&i!=M-1){
			++i;
			a[i] [l]=++j;
			for(;i>0&&l<N-1;){
				--i;++l;
				a[i] [l]=++j;
		    }
		}
		if(i==0&&l!=N-1){
			++l;
			a[i] [l]=++j;
			for(;l>0&&i<M-1;){
				i++;l--;
				a[i] [l]=++j;
			}	
		}
		if(i==M-1&&l!=N-1){
			++l;
			a[i] [l]=++j;
			for(;i>0&&l<N-1;){
				i--;l++;
				a[i] [l]=++j;
			}
		}
		if(l==N-1&&i!=M-1){
			++i;
			a[i] [l]=++j;
			for(;l>0&&i<M-1;){
				i++;l--;
				a[i] [l]=++j;
			}
		}
		continue;
	}
	for(i=0;i<M;i++){
		for(l=0;l<N;l++){
			printf("%2d ",a[i] [l]);
		}
		printf("\n");
	}
	return 0;
}
