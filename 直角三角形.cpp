#include<stdio.h>
void angle(int i,unsigned int a[],unsigned int b[],unsigned int c[]){
	int l;
	if(a[i]==0||b[i]==0||c[i]==0){
		goto end;
	}
	if(c[i]<a[i]){
		l=c[i];
		c[i]=a[i];
		a[i]=l;
	}
	if(c[i]<b[i]){
		l=c[i];
		c[i]=b[i];
		b[i]=l;
	}
	if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]){
		printf("Yes\n");
	}else 
end:  
    printf("No\n");
}
int main(){
	int n,i=0,m;
	scanf("%d",&n);
	unsigned int a[n],b[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++){
		angle(i,a,b,c);
	}
	return 0;
}
