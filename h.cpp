#include<stdio.h>
#include<string.h>
int main(){
	char str[110];
	scanf("%s",str);
	int i,k=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]=='1'){
		while (i<strlen(str)-1){
			i++;
			if(str[i]=='0'){
				k++;
			}else{
			continue;
			}
		}
	}}
	if(k>=6){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
