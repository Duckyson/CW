#include<stdio.h>
int main (){
	int n,i,l;
	scanf("%d",&n);
	int a[n][100];
	for(i=0;i<n;i++){
		for(l=0;l<25;l++){
			scanf("%d",&a[i][l]);
		}
		printf("%d",a[i][0]+a[i][4]+a[i][6]+a[i][8]+a[i][12]+a[i][16]+a[i][18]+a[i][20]+a[i][24]);
	}
	return 0;
}
