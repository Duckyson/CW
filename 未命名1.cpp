#include<stdio.h>
int main(void){
	int rabbit,duck,head,leg;
	head=58;
	leg=192;
	rabbit=(leg-head*2)/2;
	duck=head-rabbit;
	printf("Rabbit:%d\n",rabbit);
	printf("All:%d+%d\n",rabbit,duck); 
	printf("Duck:%d\n",duck);
	getchar();
	return 0;
} 
