#include<stdio.h>
int main(){
	int n,m,i=0,l=0;
	scanf("%d %d",&n,&m);
	getchar();
	int a[26];
	for(i=0;i<26;i++){
		a[i]=0;
	}
	char str[n];
	scanf("%s",str);
	for(i=0;i<n;i++){
		l=str[i]-97;
		a[l]+=1;
	}
	for(i=0;i<26;i++){
		if(a[i]>m){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
