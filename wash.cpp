#include<stdio.h>
#include<math.h>

int max(int a,int b){
	if((a>b)||(a=b)) return a;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,a[n],b[n],mmax=0,sum=0,ave;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	if(sum%n!=0){
		printf("No");
	    return 0;
	}
	int left=0,right=sum-a[0],left1,right1;
	mmax=abs(ave-a[0]);
	for(i=1;i<n;i++){
		left+=a[i-1];
		right-=a[i];
		left1=left-ave*i;
		right1=right-ave*(n-i-1);
		if(left1<0&&right1<0){
			mmax=max(mmax,abs(left1+right1));
		}else{
			left1=max(abs(left1),abs(right1));
			mmax=max(mmax,left1);
		}
	}
	printf("Yes:%d",mmax);
	return 0;
}
