#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	long T,max=0,h=0,b,s=0,d=0,mmax=0;
	scanf("%ld",&T);
    long n[100010];
	for(long i=0;i<T;i++){
        max=0;h=0;s=0;d=0;mmax=0;
		scanf("%ld",&n[i]);
		b=n[i];
		long a[100010],j[100010],k[100010];
		for(long l=0;l<b;l++){
			scanf("%ld",&a[l]);
		}
		for(long l=1;l<b;l++){
			if(a[l]>=a[l-1]){
				d=l;
			}else{
				if(max<(d-s)){
					h=0;
                    mmax=0;
					max=(d-s);
					j[h]=s+1;
					k[h]=d+1;
					mmax=(a[d]-a[s])>mmax?(a[d]-a[s]):mmax;
				}else if(max==(d-s)){
					h++;
					j[h]=s+1;
					k[h]=d+1;
					mmax=(a[d]-a[s])>mmax?(a[d]-a[s]):mmax;
				}
				s=l;
			}
		}
		for(long l=0;l<=h;l++){
			int u=k[l],o=j[l];
		    if((a[u-1]-a[o-1])==mmax){
		    	printf("%ld %ld ",j[l],k[l]);
				}
			}
		printf("\n");
	}
	return 0;
}
