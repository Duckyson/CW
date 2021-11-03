#include<stdio.h>
int jdz(int n){
	if(n<0)
	return 0-n;
	return n;
}
int main(){
	int m,i=0,n;
	int a[20];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf(" %d",&a[i]);
	}
	for(i=0;i<m-1;i++){
		if(jdz(a[i])>jdz(a[i+1])){
			n=a[i];
			a[i]=a[i+1];
			a[i+1]=n;
		}
	}
	printf("%d",a[m-1]);
	return 0;
} 
