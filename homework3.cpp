#include<stdio.h>
int main(){
	int l=0,m;
	long long n=20000000000;
	for(int i=2;i<=n;i++){
		l=0;
		for(int k=1;k<=i;k++){
		for(m=k;m>0;){
			if(m%10==1){
				l++;
			}
			m=m/10;
		}
		}
		if(l==i){
		printf("%d\n",i); 
		break;
	}
	}
	
	return 0;
} 
