#include<stdio.h>

int main(){
	long N,k,i,max=1,K,sum;
	scanf("%ld %ld",&N,&K);
	long H[N],W[N];
	for( i=0;i<N;i++){
		scanf("%ld %ld",&H[i],&W[i]);
		if(H[i]>W[i]){
		    k=H[i];
			H[i]=W[i];
			W[i]=k;
		}
		if(max<H[i]) max=H[i];
	}

	for(i=max;i>=1;i--){
		sum=0;
		for(int l=0;l<N;l++){
			sum+=(H[l]/i)*(W[l]/i);
        }
		if(sum>=K) break;
	}
	printf("%ld",i);
	return 0;
}
