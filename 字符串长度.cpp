#include<stdio.h>
int main(){
	int i=0;
	char ch;
	ch=getchar();
	while(ch!='\n'){
		i++;
		ch=getchar();
	}
	printf("%d",i);
	return 0;
}
