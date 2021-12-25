#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char ch[15];
	int i,l,m,sum=0,begin=-1;
	for(i=0;;i++){
	scanf("%c",&ch[i]);
	ch[i]=tolower(ch[i]);
	if(ch[i]=='\n') {
	    ch[i]='\0';
		break;
	}
	}
	char str[110][15],a[1100];
	fgets(a,1000,stdin);
	for(i=0,m=0;;i++,m++){
		for(l=0;a[m]!=' '&&a[m]!='\n';l++,m++){
			str[i][l]=a[m];
		}
		if(a[m]=='\n') break;
	}
	for(l=0;l<=i;l++){
		if(strcmp(str[l],ch)==0){
			sum+=1;
			if(begin==-1){
				begin=l;
			}
		}
	}
	if(sum==0){
		printf("-1");
	}else{
		printf("%d %d",sum,begin);
	}
	return 0;
}
