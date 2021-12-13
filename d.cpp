#include<stdio.h>
int main(){
	int t,i=0,y=0;int l;
	scanf("%d",&t);
	int n[t],sum[t];
	for(i=0;i<t;i++){
		scanf("%d %d",&n[i],&sum[i]);
	}
	for(i=0;i<t;i++){
		printf("%d\n",(n[i]-sum[i])+sum[i]/2);
	    if((n[i]-sum[i])+sum[i]/2>0){
	    	for(l=sum[i]+1;l<=n[i];l++){
	    		printf("%d ",l);
			}
			if(sum[i]%2==1){
				for(y=1;y<sum[i];y+=2){
					printf("%d ",y);
				}
			}else{
				if(sum[i]/2%2==1){
					for(y=2;y<sum[i]/2;y+=2){
						printf("%d ",y);
					}
					for(y=sum[i]/2;y<sum[i];y+=2){
						printf("%d ",y);
					}
				}else{
					for(y=1;y<sum[i]/2;y+=2){
						printf("%d ",y);
					}
					for(y=sum[i]/2;y<sum[i];y+=2){
						printf("%d ",y);
					}
				}
			}printf("\n");
		}
		
	}
	return 0;
}
