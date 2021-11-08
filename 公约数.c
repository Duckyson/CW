#include<stdio.h>
int main()
{
	int a,b,m,n;
	printf("Enter two integer:");
	scanf("%d  %d",&a,&b);
	for(;b>0;a=m,b=n){
		m=b;
		n=a%b;
	}
	printf("Greatest common divisor:%d",a);
	return 0;
}
