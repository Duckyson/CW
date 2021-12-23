#include<stdio.h>
int main (){
	int n,i,l,k,m=0;
	scanf("%d",&n);
	int a[5][5];
	for(i=0;i<n;i++){
		for(l=0;l<5;l++){
			for(k=0;k<5;k++){
				scanf("%d",&a[l][k]);
			}
		}
		for(l=0,k=0;l<5;l++,k++){
			m+=a[l][k];
		}
		for(l=0,k=4;k>=0;l++,k--){
			m+=a[l][k];
		}
		printf("%d",m-a[2][2]);
	}
	return 0;
}
