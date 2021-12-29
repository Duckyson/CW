#include<stdio.h>
int main(){
	int N,nt;
	float T,sum=0.0f,tn=0.0f;
	scanf("%d %f",&N,&T);
	float g[N],v[N],q[N];
	for(int i=0;i<N;i++){
		scanf("%f %f",&g[i],&v[i]);
		q[i]=v[i]/g[i];
		if(q[i]>tn) {
		    nt=i;
		    tn=q[i];
		}
	}
	for(;T>0&&q[nt]!=0;){
		if(g[nt]>=T){
			sum+=T*q[nt];
			T=0;
		}else{
			sum+=v[nt];
			T-=g[nt];
		}
		tn=q[nt]=0.0f;
		for(int i=0;i<N;i++){
		    if(q[i]>tn) {
		        nt=i;
		        tn=q[i];
		    }
	    }
	}
	printf("%.2f",sum);
	return 0;
}
