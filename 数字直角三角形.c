#include<stdio.h>
int main(){
	int i,l,m,a,n;
	scanf("%d",&n);
	i=n;a=1;
	for(l=1;l<=n;l++){
		for(m=1;m<=i;m++){
			printf("%.2d",a);
			a++;
		}
	    printf("\n");
	    i--;	
	}
	return 0;
}
