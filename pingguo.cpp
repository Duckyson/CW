#include<stdio.h>
#include<stdbool.h>

int main(){
	int N;
	scanf("%d",&N);
	int a[N],b[N][1100],sum=0,total=0,k=0,j=0,start=0;
	bool c[10010]={false};
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		k=0;
		for(int l=0;l<a[i];l++){
			scanf("%d",&b[i][l]);
			if(l==0) start=b[i][l];
			else{
				if(b[i][l]>0){
					if(start>b[i][l]){
						c[i]=true;
						k++;
					}
					start=b[i][l];
				}else{
					start+=b[i][l];
				}
			}
		}
		if(k!=0) j++;
		total+=start;
	}
	c[N]=c[0];
	c[N+1]=c[1];
	for(int i=0;i<N;i++){
		if(c[i]&&c[i+1]&&c[i+2]) sum+=1;
	}
	printf("%d %d %d",total,j,sum);
	return 0;
}
