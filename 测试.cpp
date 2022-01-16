#include<stdio.h>
int main(){
	char *a,**c;
	char b[100]="456213";
	a=b;
	c=&a;
	printf("%s",*c);
} 
