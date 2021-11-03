#include<stdio.h>
#include<stdbool.h>
bool is_prime(int n){
	if(n==2||n==3){
		return true;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
		return false;
		else continue;
	}return true;
}
int main(){
	int m,a,b;
	scanf("%d",&m);
	if(m<=6){
		printf("ERROR");
	}else if(m%2==0){
	for(a=2;a<=(m/2);a++){
		b=m-a;
		if(is_prime(a)==true&&is_prime(b)==true){
			printf("%d %d\n",a,b);
		}
	}
	}else printf("ERROR");
	return 0;
}
