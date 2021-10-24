#include<stdio.h>
int main() {
	int year;
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
 	printf("ÊÇÈòÄê\n");
	else printf("²»ÊÇÈòÄê\n"); 
	return 0;
}
