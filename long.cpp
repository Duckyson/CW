#include<stdio.h>
#include<string.h>

char *strlong(char *str1,char *str2){
    if(strlen(str1) > strlen(str2)){
        return str1;
    }
    return str2;
}

int main(){
    char str1[30],str2[30];
    char *str;
    gets(str1);
    gets(str2);
    str = strlong(str1 , str2);
    printf("long string%s",str);
    return 0;
}