#include<stdio.h>
int main(void){
	int price,a,b,c,d;
	printf("Price:");
	scanf("%d",&price);
	a=price/20;
	b=(price-20*a)/10;
	c=(price-20*a-10*b)/5;
	d=price-20*a-10*b-5*c;
	printf("$20 bills:%d\n",a);
	printf("$10 bills:%d\n",b);
	printf("$5 bills:%d\n",c);
	printf("$1 bills:%d\n",d);
	return 0;
}
