#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_prime(int n){
	if(n<2)
	return false;
	for(int m=2;m<=n/2;m++){
		if(n%m==0)
		return false;
		else continue;
	}
	return true;
}
int main(){
	char a[100];
	int b[100],c;
	scanf("%s",a);
	c=strlen(a);
	for(int m=0;m<c;m++){
		b[m]=1;
	}
	for(int i=0;i<c-1;i++){
		for(int l=i+1;l<c;l++){
			if(a[i]==a[l]){
				b[i]+=1;
			}
		}
	}
	int maxn=b[0],minn=b[0];
	for(int n=1;n<c;n++){
		if(maxn<b[n])
		maxn=b[n];
		if(minn>b[n])
		minn=b[n];
	}
	if(is_prime(maxn-minn)){
		printf("Lucky Word\n%d",maxn-minn);
	}else
	    printf("No Answer\n0");
	return 0;
}
