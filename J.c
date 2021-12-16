#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	int T,i,l,m=0,n=0,k;
	scanf("%d",&T);
	getchar();
	char str[2000];
	for(i=0;i<T;i++){
		m=0;n=0;
	scanf("%s",str);
	getchar();
	char shu[1000][100],fu[1000];
	long long shu1[1000]={0};
	for(l=0;l<strlen(str);l++){
		
		if(str[l]>=48&&str[l]<=57){
			shu[m][n]=str[l];
			n++;
		}else{
			fu[m]=str[l];
			for(k=n;k<strlen(shu[m]);k++){
				shu[m][k]='\0';
			
			
			}m++;n=0;
		}
	}for(l=0;l<m;l++){
		shu1[l]=atoi(shu[l]);
	}
	for(l=0;l<m;){
		if(fu[l]!='x'&&fu[l]!='/'){
		shu1[l]=atoi(shu[l]);}
		shu1[l+1]=atoi(shu[l+1]);
		
		if(fu[l]=='x'){
			
			shu1[l+1]=shu1[l]*shu1[l+1];
			if(l==0){fu[l]='+',shu1[l]=0;
			}else {if(fu[l-1]=='+'||fu[l-1]=='-'){
			shu1[l]=0;fu[l]=fu[l-1];}else{
				shu1[l]=1;fu[l]=fu[l-1];
			}}
			
			l++;
		}else if(fu[l]=='/'){
			
			shu1[l+1]=shu1[l]/shu1[l+1];
				if(l==0){fu[l]='+',shu1[l]=0;
			}else {if(fu[l-1]=='+'||fu[l-1]=='-'){
			shu1[l]=0;fu[l]=fu[l-1];}else{
				shu1[l]=1;fu[l]=fu[l-1];
			}}
			l++;
		}
		l++;
		if(fu[l-1]=='x'||fu[l-1]=='/'){
			l--;
		}
	}
	long long sum;
	sum=shu1[0];
	for(l=0;l<m;l++){
		
		if(fu[l]=='+'){
			sum+=shu1[l+1];
		}else{
			sum-=shu1[l+1];
		}
	}
	printf("%lld\n",sum);
	}
}
