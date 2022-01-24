#include<stdio.h>
int mod=1e6+10; 
int main(){
	int N;
	scanf("%d",&N);
	long A[N],t=0;
	for(int i=0;i<N;i++){
		scanf("%ld",&A[i]);
	}
	long q[mod]={0};
	for(int i=0;i<N;i++){
		t=A[i];
		if(q[t]==0){
			q[t]+=1;
			printf("%ld",A[i]);
		}else{
			A[i]+=1;
			i--;
		}
	}
	return 0;
}
