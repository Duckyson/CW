#include<stdio.h>
int main(){
	int k=0,m=1,n=0;
	scanf("%d",&k);
    while (m*(m+1)/2<k){
    	m++;
	}
	n=m*(m+1)*(2*m+1)/6-(m*(m+1)/2-k)*m;
	printf("%d",n);
	return 0;
}
