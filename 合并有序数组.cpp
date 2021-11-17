#include<stdio.h>
int main(){
	int m,n,i,x,s,l;
	scanf("%d %d",&m,&n);
	x=m+n;
	int a[x];
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<x-1;i++){
		for(l=0;l<x-1-i;l++){
			if(a[l]>a[l+1]){
				s=a[l];
				a[l]=a[l+1];
				a[l+1]=s;
			}
			else continue;
		}
	}
	for(i=0;i<x;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
