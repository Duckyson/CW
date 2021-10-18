#include<stdio.h>
int main(void){
	int all;
	float x;
	printf("X:");
	scanf("%f",&x);
	all=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	
	printf("answer:%d\n",all);
	getchar();
	return 0;
}
