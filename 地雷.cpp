#include<stdio.h>
int a[3]={-1,0,1},b[3]={-1,0,1};
char str[110][110]={0};
int jisuan(int f,int g){
	int cont=0;
	for(int i=0;i<3;i++){
		for(int l=0;l<3;l++){
			if(str[f+a[i]][g+b[l]]=='*') cont++;
		}
	}
	return cont;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	getchar();
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++){
			scanf("%c",&str[i][l]);
		}
		getchar();
	}
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++){
			if(str[i][l]=='?') str[i][l]=jisuan(i,l)+48;
			printf("%c",str[i][l]);
		}
	}
	return 0;
}
