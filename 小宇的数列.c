#include<stdio.h>
#define N 100
int main(){
	int a[N],i,m=0,n=0;
	for(i=0;i<N;i+=5){
		scanf("%d %d %d %d %d",&a[i],&a[i+1],&a[i+2],&a[i+3],&a[i+4]);
		if(a[i]==0&&a[i+1]==0&&a[i+2]==0&&a[i+3]==0&&a[i+4]==0)/*ĘäČëľÄÎĺ¸öĘý˛ťśźÎŞ0*/ 
		break;
	}
	for(i=0;i<N&&a[i]!=0||a[i+1]!=0||a[i+2]!=0||a[i+3]!=0||a[i+4];i+=5){
		if((a[i+1]-a[i])==(a[i+2]-a[i+1])==(a[i+3]-a[i+2])==(a[i+4]-a[i+3])){
			m=a[i+1]-a[i];
			printf("case one\n%d %d %d %d %d\n",a[i+4]+m,a[i+4]+2*m,a[i+4]+3*m,a[i+4]+4*m,a[i+4]+5*m);
		}
		if(a[i]*a[i+2]==a[i+1]*a[i+1]&&a[i+1]*a[i+3]==a[i+2]*a[i+2]&&a[i+2]*a[i+4]==a[i+3]*a[i+3]){
			n=a[i+1]/a[i];
			printf("case two\n%d %d %d %d %d\n",a[i+4]*n,a[i+4]*n*n,a[i+4]*n*n*n,a[i+4]*n*n*n*n,a[i+4]*n*n*n*n*n);
		}
		if(a[i+2]==a[i]+a[i+1]&&a[i+3]==a[i+1]+a[i+2]&&a[i+4]==a[i+2]+a[i+3]){
			printf("case three\n%d %d %d %d %d\n",a[i+3]+a[i+4],a[i+3]+2*a[i+4],2*a[i+3]+3*a[i+4],3*a[i+3]+5*a[i+4],5*a[i+3]+8*a[i+4]);
		}
	}
	return 0;
}
