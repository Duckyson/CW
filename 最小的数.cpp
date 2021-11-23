#include<stdio.h>
#include<math.h>
int main(){
	int a[10],i,n=0,sum=0;
	for(i=0;i<10;i++){
		scanf(" %d",&a[i]);
		n+=a[i];
	}
	if(a[0]!=0){
		for(i=1;i<10;i++){
			if(a[i]!=0){
			sum+=i*pow(10,n-1);
			a[i]-=1;n--;
			break;
	    	}
		}
	}
	for(i=0;i<10;i++){
		for(;a[i]>0;a[i]-=1,n--){
			sum+=i*pow(10,n-1);
		}
    }
    printf("%d",sum);
	return 0;
}
