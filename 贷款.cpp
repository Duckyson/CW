#include<stdio.h>
int main(void){
	float loan,rate,payment,remaining1,remaining2,remaining3;
	printf("Enter amount of loan:");
	scanf("%f",&loan);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);
	remaining1=loan*(1+rate/12.0f/100.0f)-payment;
	remaining2=remaining1*(1+rate/12.0f/100.0f)-payment;
	remaining3=remaining2*(1+rate/12.0f/100.0f)-payment;
	
	printf("\nBalance remaining after first payment:$%.2f\n",remaining1);
	printf("Balance remaining after second payment:$%.2f\n",remaining2);
	printf("Balance remaining after third payment:$%.2f\n",remaining3);
	return 0;
}
