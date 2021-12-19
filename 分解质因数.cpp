#include<stdio.h>
#include<stdbool.h>

bool is_prime(int a){
	int i;
	if(a==2||a==3){
		return true;
	}
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int k,i,l=2;
	scanf("%d",&k);
	int a[k];
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		l=2;
		if(is_prime(a[i])){
			printf("%d\n",a[i]);
		}else{
			
				for(;l<=a[i];l++){
					if(is_prime(l)){
						if(a[i]%l==0){
							printf("%d",l);a[i]=a[i]/l;l--;
							if(a[i]!=1){
								printf("*");
							}
						}
					}
				}
			printf("\n");
		}
		
	}
	return 0;
} 
