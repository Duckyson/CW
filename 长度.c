//¼ÆËãÊäÈëÏûÏ¢³¤¶È 
#include<stdio.h>
int main()
{
	char ch;
	int len=0;
	printf("Enter a message:");
	ch = getchar();
	while (ch!='\n'){
	len++;
	ch=getchar();
	}
    printf("Your messagewas %d character(s) long.\n",len);
    
    return 0;
}
