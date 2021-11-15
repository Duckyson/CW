#include<stdio.h>
	int count_spaces(char s[]){
		int count = 0,i;
		for(i=0;s[i]!='\0';i++)
		if(s[i]==' ')
		count++;
		printf("%d",count);
		return count;
	}
	int main(){
		char i[100];
		int a;
		for(a=0;a<=2;a++){
		scanf("%c",i[a]);
		}
		count_spaces(i[100]);
	return 0;
}
