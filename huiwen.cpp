#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0,e=0,f=0,l=1;
		for(a=e=1;a<=9;a++,e++){
				for(b=d=0;b<=9;b++,d++){
					c=n-a-b-d-e;
					if(c>=0&&c<=9){
						printf("%d%d%d%d%d\n",a,b,c,d,e);l=0;
					}
				}
			}
		if(n%2==0){
			for(a=f=1;a<=9;a++,f++){
				for(b=e=0;b<=9;b++,e++){
					c=d=(n-a-b-e-f)/2;
					if(c>=0&&c<=9){
						printf("%d%d%d%d%d%d\n",a,b,c,d,e,f);l=0;
					}
				}
			}
		}
	if(l==1){
		printf("-1");
	}
	return 0;
}
