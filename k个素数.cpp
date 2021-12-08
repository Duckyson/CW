#include<stdio.h>
#include<stdbool.h>

bool is_prime(int a){
	int i=2;
	if(a==2||a==3){
		return true;
	}else{
		for(i=2;i<=a/2;i++){
			if(a%i==0) return false;
		}
	}
	return true;
}
int main(){
	int n,i,l;
	scanf("%d",&n);
	int m[n],k[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&m[i],&k[i]);
		for(l=m[i]+1;k[i]>0;l++){
			if(is_prime(l)){
				printf("%d",l );
				k[i]--;
			}
		}
	}
	return 0;
}
