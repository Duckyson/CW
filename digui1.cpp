#include<stdio.h>

void zuhe(int j,int k,int a[],int b[]){
	if(j==k){
		printf("-->");
		int i;
		for(i=0;i<k;i++){
			if(b[i]==1){
				printf("%d",a[i]);
			}else{
				continue;
			}
		}
		printf("\n");
		return;
	}
	b[j]=1;
	zuhe(j+1,k,a,b);
	b[j]=0;
	zuhe(j+1,k,a,b);
}

int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int l=0;l<n;l++){
			scanf("%d",&a[l]);
		}
		zuhe(0,n,a,b);
	}
	return 0;
}
