#include<stdio.h>
#include<math.h>
int main (){
	int n,b=0,t=1,s=-1,e=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			if(s!=-1){
				if(a[i-1]==0){
					e=i;
				}else if(abs(a[i]-a[i-1])!=1){
					t=0;
					break;
				}
			}
			if(b%2==0&&b!=0){
				if(abs(a[e]-a[s])<=2*b-1&&abs(a[e]-a[s])%2==1){
					t=1;
				}else{
					t=0;
					break;
				}
			}else if(b%2==1&&b!=0){
				if(abs(a[e]-a[s])<=2*b&&abs(a[e]-a[s])%2==0){
					t=1;
				}else{
					t=0;
					break;
				}
			}
			s=i;
			b=0;
		}else{
			b+=1;
		}
	}
	if(t==1){
		printf("yes");
	}else{
		printf("no");
	}
} 
