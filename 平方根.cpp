#include<stdio.h>
#include<math.h>

int main(){
	int n,i;
	scanf("%d",&n);
	double a[n];
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0.0){
			printf("ERROR\n");
		}else{
			printf("%.2lf\n",sqrt(a[i]));
		}
	}
	return 0;
} 
