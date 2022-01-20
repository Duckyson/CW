#include<stdio.h>
int main(){
	long long n,a,b,i=0,max,left=0,right=0,sum=0;
	scanf("%lld %lld %lld",&n,&a,&b);
	long long wdk[a],cw[a],wdk1[b],cw1[b];
	for(i=0;i<a;i++){
		scanf("%lld %lld",&wdk[i],&cw[i]);
	}
	for(i=0;i<b;i++){
		scanf("%lld %lld",&wdk1[i],&cw1[i]);
	}
	max=a>b?a:b;
	for(i=0;;i++){
		if(wdk[left]>wdk1[right]){
			right++;
		}else if(wdk[left]<wdk1[right]){
			left++;
		}else{
			sum+=cw[left]*cw1[right];
			left++;
			right++;
		}
		if(left>a||right>b){
			break;
		}
	}
	printf("%lld",sum);
	return 0;
}
