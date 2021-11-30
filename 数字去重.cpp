#include<stdio.h>
int paixu(int *a,int *p){
	int i=0,l=0,q;
	for(i=0;i<*p-1;i++){
		for(l=1;l<*p-i;l++){
		if(*(a+i)==*(a+i+l)){
			*(a+i+l)=*(a+*p-1);
			(*p)--;
		}
		if(*(a+i)>*(a+i+l)){
			q=*(a+i);
			*(a+i)=*(a+i+l);
			*(a+i+l)=q;
		}
	    }
	    if(*(a+*p-1)==*(a+*p-2)) (*p)--;
	}return *p; 
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int m,l;
		scanf("%d",&m);
		int a[m];
		for(l=0;l<m;l++){
			scanf("%d",&a[l]);
		}
		m=paixu(a,&m);
		for(l=0;l<m;l++){
			printf("%d ",a[l]);
		}
		printf("\n");
	}
	return 0;
}
