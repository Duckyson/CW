#include<stdio.h>
int main(){
	int A,B,n,i,c;
	scanf("%d%d",&n,&i);
	c=n/i;
	A=c*(c+1)/2*i;/*������i�����ĺ�*/
	B=n*(n+1)/2-A;/*��������i�����ĺ�*/
	printf("A��ƽ����:%d\n",A/c);
	printf("B��ƽ����:%d",B/(n-c));
	return 0; 
}
