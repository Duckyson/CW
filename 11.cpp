#include<stdio.h>
#include<math.h>
int main(){
	double x,sum=0.0;
	double n;
	scanf("%lf",&n);
	if(n==1){
		printf("%lf",n);
		return 0;
	}
	if(n>100000000){
		sum=n*(log(n)+0.5772);
		printf("%lf",sum);
		return 0; 
	}
	for(int i=1;i<=n;i++){
		double num=n/i*1.0;
		sum+=num;
	}
	printf("%lf",sum);
	return 0;
} 
