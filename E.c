#include<stdio.h>
int main(){
	int T,y;
	scanf("%d",&T);
	for(y=0;y<T;y++){
	long n,i,l;
	scanf("%ld",&n);
	getchar();
	char a[n];
	long b[n],k=0;
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
		if(a[i]=='1'){
			b[k]=i+1;
			k++;
		}
	}
	long sum=0;
	for(i=0;i<k-1;i++){
		for(l=1;l<k-i;l++){
			sum+=((b[i]-b[i+l])*(b[i]-b[i+l]))%1000000007;
		}
	}
	printf("%ld\n",sum%1000000007);
	}
	return 0;
}
