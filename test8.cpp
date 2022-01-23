#include<stdio.h>

int main(){
	int n,j=1,sum=0;
	long long N;
	scanf("%d %lld", &n,&N);
	int A[n+1],f[N];
	for(int i=1;i<n+1;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<N;i++){
		if(i<A[j]){
			f[i]=j-1;
		}else{
			j++;i--;
		}
	}
	for(int i=0;i<N;i++){
		sum+=f[i];
	}
	printf("%d",sum);
	return 0;
}
