#include<stdio.h>

long long int jie(int n){
	int sum;
	if(n==0||n==1){
        sum=1;
	}
	else if(n<26&&n>1){
		sum=n*jie(n-1)%1000000;
	}
	return sum;
}

int main(){
	int k;
	scanf("%d",&k);
	int a[k],i,l;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	long long int sum=0;
	for(i=0;i<k;i++){
		for(l=a[i];l>0;l--){
			sum+=jie(l);
			sum=sum%1000000;
		}
		printf("%lld\n",sum);
		sum=0;
	}
	return 0;
}
