#include<stdio.h>
#include<stdbool.h>
bool su(int n){
	int a,b,c;
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	if(a*a*a+b*b*b+c*c*c==n){
		return true;
	}
	return false;
}
int main(){
	int i=0,T,m,n;
	scanf("%d",&T);
	for(;T>0;T--){
		scanf("%d %d",&m,&n);
		for(;m<=n;m++){
			if (su(m)==true){
				printf("%d ",m);
				i++;
			}
		}
		if(i==0){
			printf("-1");
		}
		printf("\n");
	}
	return 0;
}
