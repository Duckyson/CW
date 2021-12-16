#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[1000],b[1000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	long sum=1;
	for(i=0;i<n;i++){
		if(b[i]>=a[i]){
		sum=sum*(b[i]-a[i]+1);
	    }
	    else{sum=0;break;
		}
	}
	printf("%ld",sum);
	return 0;
}
