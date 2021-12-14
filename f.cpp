#include<stdio.h>
int main(){
	int t,i;
	scanf("%d",&t);
	long long n[t],m[t],d[t];
	for(i=0;i<t;i++){
		scanf("%lld %lld %lld",&n[i],&m[i],&d[i]);
	}
	for(i=0;i<t;i++){
		if(n[i]<m[i]){
			if(n[i]*d[i]+n[i]>=m[i])
			printf("YES\n");
		else {
			printf("NO\n");}
		}else if(n[i]==m[i]){
			printf("YES\n");
		}else{
			if(d[i]*m[i]+m[i]>=n[i]){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
		
	}
	return 0;
}
