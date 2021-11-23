#include<stdio.h>
#include<math.h>
int main(){
	int a[10],i,n=0,sum=0;
	char m=48;
	for(i=0;i<10;i++){
		scanf(" %d",&a[i]);
		n+=a[i];
	}
	if(a[0]!=0){
		for(i=1;i<10;i++,m++){
			if(a[i]!=0){
			printf("%c",m+1);
			a[i]-=1;n--;
			break;
	    	}
		}
	}
	for(i=0,m=48;i<10;i++,m++){
		for(;a[i]>0;a[i]-=1,n--){
			printf("%c",m);
		}
    }
	return 0;
}
