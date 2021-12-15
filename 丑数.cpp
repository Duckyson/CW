#include<stdio.h>

int main(){
	int n,i,l,m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(;;){
        if(a[i]%2==0){a[i]/=2;
		}else  if(a[i]%3==0){a[i]/=3;
		}else  if(a[i]%5==0){a[i]/=5;
		}else break;
	}
	}
	for(i=0;i<n;i++){
		if(a[i]==1){
			printf("true\n");
		}else{printf("false\n");
		}
	}
	return 0;
}
