#include<stdio.h>
#include<math.h>
int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int n,l;
		scanf("%d",&n);
		int a[n];
		for(l=0;l<n;l++){
			scanf("%d",&a[l]);
		}
		for(int k=pow(2,n)-1;k>=0;k--){
			int b[n],k0=k;
			for(l=0;l<n;l++){
				b[n-1-l]=k0%2;
				k0=k0/2;
			}
			printf("-->");
			for(l=0;l<n;l++){	
				if(b[l]==1){
					printf("%d",a[l]);
				}else {
					continue;
				}
			}
			printf("\n");
		}
	}
	return 0;
}
