#include<stdio.h>
#include<string.h>
int main(){
    int i,m=1;
    int left=0,right=0;
    char str[100010];
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='('){
            left++;
        }else if(str[i]==')'){
            right++;
        }else{
            m=0;
            break;
        }
        if(right>left){
            m=0;
            break;
        }
    }
    if(left>right){
        m=0;
    }
    if(m){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
