#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,l,m=0;
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	bool b[n];
	for(i=0;i<n;i++){
		b[i]=false;
	}
	for(i=0;i<n;i++){
		for(l=1;l<n-i;l++){
			if(a[i]==a[i+l]){
				b[i+l]=true;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==false){
			m+=1;
		}
	}
	printf("%d",m);
	return 0;
}
