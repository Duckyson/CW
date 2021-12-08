#include<stdio.h>
int main(){
	int n,i,l,m,swap,j=0;
	scanf("%d",&n);
	int b[n],a[n][100];
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		for(l=0;l<b[i];l++){
			scanf("%d",&a[i][l]);
		}
	}
	for(i=0;i<n;i++){
		j=0;
		for(m=0;m<b[i];m++){
			for(l=1;l<b[i]-m;l++){
				if(a[i][m]>a[i][m+l]){
					swap=a[i][m];
					a[i][m]=a[i][m+l];
					a[i][m+1]=swap;
				}
			}
		}
		for(m=1;m<b[i];m++){
			if(a[i][m]>a[i][0]){
				printf("%d\n",a[i][m]);j+=1;
				break;
			}
		}
		if(j==0){
			printf("ERROR\n");
		}
	}
	return 0;
}
