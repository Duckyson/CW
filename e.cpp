#include<stdio.h>
int main(){
	int t,i;
	scanf("%d",&t);
	int r[t],c[t],sum[t],total[t];
	for(i=0;i<t;i++){
		scanf("%d %d %d",&r[i],&c[i],&sum[i]);
		total[i]=r[i]-1+r[i]*(c[i]-1);
	}
	for(i=0;i<t;i++){
		if(total[i]==sum[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
