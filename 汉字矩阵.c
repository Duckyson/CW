#include<stdio.h>
#include<stdbool.h>
int main(){
	int N,n=0,i=0,P,m,j=0;
	scanf("%d",&N);
	int a[N*N+10];
	bool key=false;
	scanf("%d",&P);
	while(P!=0){
		for(;n<i+P;n++){
		a[n]=key;
		}
		scanf("%d",&P);
		i=n;
		key=!key;
	}
	for(n=0;n<N;n++){
		for(i=0;i<N;i++){
			printf("%d",a[j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
