#include<stdio.h>
int main(){
	int n,l=0,i,d,c;
	char str[201],b[201],chu;
	scanf("%d",&n);
	getchar();
    fgets(str, 200, stdin);
    for(i=0;str[i]!='\n';i++){
    b[l]=str[i];
    l++;
	}
	for(d=0;d<n;d++){
			chu=b[l-1];
		for(c=i-1;c>0;c--){
			b[c]=b[c-1];
		}
			b[0]=chu;
	}
	for(c=0;c<l;c++){
		printf("%c",b[c]);
	}
	return 0;
}
