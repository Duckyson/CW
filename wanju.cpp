#include<stdio.h>
int a[100010]={0},b[100010]={0},c[100010]={0};
char str[100010][20]={0};
int main(){
	int n,m;
	int cont=1;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d %s",&a[i],str[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d %d",&b[i],&c[i]);
		if(a[cont]!=b[i]) cont+=c[i];
		else cont+=(n-c[i]);
		cont%=n;
		if(cont==0) cont=7; 
	}
	printf("%s",str[cont]);
	return 0;
}
