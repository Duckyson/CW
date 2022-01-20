#include<stdio.h>
int main(){
	long n,i=0,max=0,min=0;
	scanf("%ld",&n);
	long B[n];
	for(i=0;i<n;i++){
		scanf("%ld",&B[i]);
	}
	for(i=0;i<n;i++){
		if(B[i]!=0){
			if(i==0){
				max+=B[i];
				min+=B[i];
			}else if(B[i]==B[i-1]){
				max+=B[i-1];
				min+=0;
			}else{
				max+=B[i];
				min+=B[i];
			}
		}
	}
	printf("%ld\n%ld",max,min);
	return 0;
}
