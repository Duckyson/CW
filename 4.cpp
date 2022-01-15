#include<stdio.h>
void abs(int *a,int *b,int*c){
	int *q=a;
	int *p=b;
	for(int i=0;i<2;i++){

		*++c=*q++;
	}
	a=q;
	
}
int main(){
	int a[5]={1,2,3,4,5};
	int b[3]={6,7,8};
	int c[100];
	abs(a,b,c);
	printf("%d\n%d",a[0],c[0]);
}
