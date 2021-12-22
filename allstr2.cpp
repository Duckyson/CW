#include<stdio.h>
#include<string.h>
int main(){
    char str[100100];
    int a[100100],i=0,max=0,arr;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='('){
            a[i]=0;
        }else if(i>0){
            arr=i-a[i-1]-1;
            if(arr>=0){
                if(str[arr]=='('){
                    a[i]=a[i-1]+2;
                    if(arr>0){
                        a[i]+=a[arr-1];
                    }
                }else{
                    a[i]=0;
                }
            }
        }else{
            a[i]=0;
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
