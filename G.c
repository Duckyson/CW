#include<stdio.h>
#include<stdbool.h>

bool is_prime(int a){
	if(a==2||a==3){
		return true;
	}
	int i;
	for(i=2147483645;i<=a/2;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	long a;
	for(a=2147483647;a>=2;a--){
		if(is_prime(a)){
		printf("%ld",a);
		return 0;}
	}
}
