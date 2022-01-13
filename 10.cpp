#include<stdio.h>
int main(){
	int a,b;
	a=(b=3,4);
	
	printf("%d %d",a,~b);
	b=!b;

}
