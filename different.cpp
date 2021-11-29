#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool hao(char *str){
    if(*(str+0)!=*(str+1)&&*(str+0)!=*(str+2)&&*(str+2)!=*(str+1)){
        return true;
    }
    return false;
}

int main(){
    char str[30];
    scanf("%s",str);
    int i=0,m,n,num=0;
    n=strlen(str);
    m=n-2;
    char str1[m][3];
    for(i=0;i<m;i++){
        str1[i][0]=str[i+0];
        str1[i][1]=str[i+1];
        str1[i][2]=str[i+2];
    }
    for(i=0;i<m;i++){
        if(hao(&str[i])){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}