#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double T[n],a[n],sum=0.0;
	for(int i=0;i<n;i++){
		scanf("%lf",&T[i]);
		a[i]=i+1;
	}
	for(int i=0;i<n-1;i++){
		for(int l=1;l<n-i;l++){
			if(T[i]>T[i+l]){
				double t=T[i];
				T[i]=T[i+l];
				T[i+l]=t;
				t=a[i];
				a[i]=a[i+l];
				a[i+l]=t;
			}
		}
		sum+=(float)(n-i-1)*T[i];
	}
	for(int i=0;i<n;i++){
		printf("%.0lf ",a[i]);
	}
	printf("\n%.2lf",sum/n);
	return 0;
}
