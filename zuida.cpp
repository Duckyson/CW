#include<stdio.h>
int max(int,int);
int main(){
	int a,b,result;
	scanf("%d",&a);
	scanf("%d",&b);
	result=max(a,b);
	printf("max is:%d\n",result);
	return 0;
}
int max(int a,int b)//µ¼³ö×î´óÖµ 
{
	int result;
	if(a>b)
		result=a;
	else
		result=b;
	return result;
}
