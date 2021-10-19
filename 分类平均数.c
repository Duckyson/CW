#include<stdio.h>
int main(){
	int A,B,n,i,c;
	scanf("%d%d",&n,&i);
	c=n/i;
	A=c*(c+1)/2*i;/*能整除i的数的和*/
	B=n*(n+1)/2-A;/*不能整除i的数的和*/
	printf("A类平均数:%d\n",A/c);
	printf("B类平均数:%d",B/(n-c));
	return 0; 
}
