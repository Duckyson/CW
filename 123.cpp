#include<stdio.h>

int main(){
	long N,k,i,min=1,K,sum,h=1;
	scanf("%ld %ld",&N,&K);
	long H[N],W[N];
	for(i=0;i<N;i++){	
	    scanf("%ld %ld",&H[i],&W[i]);
	    if(h<H[i]) h=H[i];
	    if(h<W[i]) h=W[i];
	}

	for(;i>=1;){
	    i=(min+h)/2;
		sum=0;
		for(int l=0;l<N;l++){
			sum+=(H[l]/i)*(W[l]/i);
        }
		if(sum>=K){
			min=i;
		}else{
			h=i;
		}
		if(min==h||min==h-1) break;
	}
	printf("%ld",min);
	return 0;
}
