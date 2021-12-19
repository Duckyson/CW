#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char a[100];
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]>=65&&a[i]<=90){
			a[i]=155-a[i];
		}
		printf("%c",a[i]);
	}
	return 0;
}
