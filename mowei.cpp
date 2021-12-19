#include<stdio.h>
int main(){
	int n,i,m,l,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		int a[m];
		for(l=0;l<m;l++){
			scanf("%d",&a[l]);
		}
		for(l=0;l<m;l++){
			if(a[l]==0){
				for(k=l;k<m-1;k++){
					a[k]=a[1+k];
				}
				a[m-1]=0;
			}
		}
		for(l=0;l<m;l++){
			printf("%d",a[l]);
		}
	}
	return 0;
}
