#include<stdio.h>
int main(){
	int n=0,sum=0,i=1;
	scanf("%d",&n);
	for(;i<=n;i++){
		sum+=i;
	}
	printf("%d\n",sum);
	sum=0;i=1;
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("%d\n",sum);
	sum=0;i=1;
	do{
		sum+=i;
		i++;
	}while(i<=n);
	printf("%d",sum);
	return 0;
}
