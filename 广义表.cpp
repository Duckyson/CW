#include<stdio.h>
#include<string.h>
int main(){
	char str[110];
	for(;;){
	int a=2,b=0,i;
	    scanf("%s",str);
	    if(strcmp(str,"END")==0){
	    	break;
		}
		for(i=0;i<strlen(str);i++){
			if(str[i]=='('){
				b+=1;
				a-=1;
			}
			if(str[i]==','){
				a+=1;
			}
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}
