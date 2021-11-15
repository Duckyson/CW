#include<stdio.h>
#include<stdbool.h>
bool zimu(char ch){
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	return true;
	return false;
}
int main(){
	int i=0,n=0,m=-1,b[100],l;
	char str[100]={'\0'},a[100][100];
	fgets(str,100,stdin);
	for(i=0;str[i]!='\n';){
		for(;zimu(str[i])==true;){
			m=m+1;
			for(n=0;zimu(str[i])==true;i++){
			a[m][n]=str[i];
			n++;
		    }
		    b[m]=n;
		}
		for(;zimu(str[i])==false&&str[i]!='\n';){
			m=m+1;
            for(n=0;zimu(str[i])==false&&str[i]!='\n';i++){
			a[m][n]=str[i];
			n++;
		    }
		    b[m]=n;
    	}
	}
	for(i=0;i<=m;i++){
		if(zimu(a[i][0])==true){
			for(l=b[i]-1;l>=0;l--){
				printf("%c",a[i][l]);
			}
		}
		if(zimu(a[i][0])==false){
			for(l=0;l<b[i];l++){
				printf("%c",a[i][l]);
			}
		}
	}
}
