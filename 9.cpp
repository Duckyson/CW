#include<stdio.h>
int main(){
	int a=0,b=1,c=1;
	printf("%d\n",a||b++&&c++);
	printf("%d %d %d",a,b,c);
}
