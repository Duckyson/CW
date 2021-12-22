#include<stdio.h>
#include<string.h>
int main(){
    char str[60];
    int i,left=0,right=0,sum=0;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='('){
            left++;
        }else{
            right++;
        }
        if(right>left){
            left++;
            sum++;
        }
    }
    sum+=left-right;
    printf("%d",sum);
    return 0;
}
