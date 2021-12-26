#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];int k;
	scanf("%s",s);
	scanf("%d",&k);
	int j=0;char a[1000];int l=0,m=0;
    for(j=0;j<strlen(s);j++){
        if(s[j]!='-'){
            if(s[j]>=97&&s[j]<=122){
                s[j]-=32;
            }
            a[l]=s[j];
            l++;
        }
    }
    j=0;
    if(l%k>0){
        for(j=0;j<l%k;j++){
            printf("%c",a[j]);
        }
        printf("-");
    }
    for(;j<l;j+=k){
        for(m=0;m<k;m++){
            printf("%c",a[j+m]);
        }
        if(j+k<l){
        	printf("-");
		}
        
    }
    return 0;
}
