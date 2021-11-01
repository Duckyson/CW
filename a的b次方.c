#include<stdio.h>
#include<stdlib.h>
int power(int x,int n){
	if(n==0){
		return 1;
	}
	else return x*power(x,n-1);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",power(a,b));
	exit(0);
}
