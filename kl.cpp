#include<stdio.h>
int main(){
	int L,R,A;
	scanf("%d %d %d",&L,&R,&A);
	if(L<R){
		if((R-L)<=A){
			printf("%d",2*R+((A-R+L)/2)*2);
		}else{
			printf("%d",2*(L+A));
		}
	}else if(L==R){
		printf("%d",2*L+(A/2)*2);
	}else{
		if((L-R)<=A){
			printf("%d",2*L+((A-L+R)/2)*2);
		}else{
			printf("%d",2*(R+A));
		}
	}
	return 0; 
}
