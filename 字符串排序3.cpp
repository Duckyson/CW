#include<stdio.h>
#include<string.h>
int main(){
	char str[100][110],str1[110];
	int i=0,l,k=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%s",str[k]);
		k++;
	}
	for(i=0;i<k-1;i++){
		for(l=1;l<k-i;l++){
			if(strcmp(str[i],str[i+l])>0){
				strcpy(str1,str[i]);
				strcpy(str[i],str[i+l]);
				strcpy(str[i+l],str1);
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%s\n",str[i]);
	}
	return 0;
}
