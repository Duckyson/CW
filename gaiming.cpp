#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    long q,n;
	long long m=0,ci=1;
	long long cont=0;
	scanf("%ld %ld",&n,&q);
	int b[q+10],hj[26],bv=0;
	char s[n],a[q+10][10];
	scanf("%s",s);
    for(int i=0;i<26;i++){
        hj[i]=0;
    }
    for(int i=0;i<n;i++){
       bv=s[i]-'a';
       hj[bv]+=1;
    }
	for(int i=0;i<q;i++){
		scanf("%d %s",&b[i],&a[i]);
        switch(b[i]){
			case 1:{
				m=atoi(a[i]);
				ci+=m;
				break;
			}
			case 2:{
                bv=a[i][0]-'a';
				cont=hj[bv]%1000000007;
				
				cont*=ci;
				printf("%lld\n",cont%1000000007);
				break;
			}
		}
	}
	return 0;
} 
