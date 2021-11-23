#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[N],i;
	float sum;
	for(i=0;i<N;i++){
		scanf(" %d",&a[i]);
		sum+=a[i];
	}
	printf("%.2f",sum/N);
	return 0;
}
