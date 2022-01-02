#include<stdio.h>
int main(){
	int a,n,j;
	for(;scanf("%d %d",&a,&n)!=EOF;){
		for(int i=0;;i++){
			if((1+i*n)%a==0){
				j=(1+i*n)/a;
				break;
			}else{
				continue;
			}
		}
	}
	printf("%d",j);
	return 0;
} 
