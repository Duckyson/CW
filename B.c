#include<stdio.h>


int main(){
	long n,m;
	int i,l;
	scanf("%ld",&n);
	long a[n];
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	long q;
	scanf("%ld",&q);
	long b[q][3],sum[q];
	for(i=0;i<q;i++){
		scanf("%ld %ld %ld",&b[i][0],&b[i][1],&b[i][2]);
		sum[i]=0;
	}
	int max;
	for(i=0;i<q;i++){
		for(l=b[i][0]-1;l<b[i][1];l++){
				max=a[l];
	for(m=l+1;m<b[i][2];m++){
		if(max<a[m]);
		max=a[m];
		}
			sum[i]+=max;
		}
	}
	for(i=0;i<q;i++){
		printf("%ld ",sum[i]);
	}
	return 0;
}
