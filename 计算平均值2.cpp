#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int main(){
	bool noprint=false;
	int N,i,l,m=0,cw;
	scanf("%d",&N);
	getchar();
	int b[N][5],a[N];
	double ave=0,sum=0;
	char ch;
	for(i=0;i<N;i++){
		a[i]=0;
	}
	for(i=0;i<N;i++){
		l=0;
		ch=getchar();
		while (ch!=' '&&ch!='\n'){
			b[i][l]=ch;
			l+=1;
			ch=getchar();
		}
	}
	for(i=0;i<N;i++){
		for(l=0;l<5;l++){
			if(b[i][l]=='-'){
				l+1;
			}
		    if(b[i][l]>=48&&b[i][l]<=57){
		     	b[i][l]=b[i][l]-48;a[i]+=1;
		    }
		}
	}
	for(i=0;i<N;i++){
		cw=0;
	    if(b[i][0]=='-'){
	    	for(l=1;l<a[i]+1;l++){
	    		cw+=b[i][l]*pow(10,a[i]-l);
			}
			noprint=true;
			sum-=cw;
		}
		cw=0;
		if(b[i][0]>=1&&b[i][0]<=9){
			for(l=0;l<a[i];l++){
				cw+=b[i][l]*pow(10,a[i]-l-1);
			}
			noprint=true;
			sum+=cw;
		}
	}
	for(i=0;i<N;i++){
		if(b[i][0]!='n')
		m+=1;
	}
	if(noprint==false){
		printf("n/a");
	}else{
	ave=sum/m;
	printf("%.2lf",ave);
	}
	return 0;
}
