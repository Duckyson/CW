#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	long T;
	scanf("%ld",&T);
	for(long i=0;i<T;i++){
		int m,n;
		long sum=0;
		scanf("%d %d",&n,&m);
		getchar();
		char a[n+2][m+2]={0};
		for(int l=1;l<n+1;l++){
			for(int y=1;y<m+1;y++){
				scanf("%c",&a[l][y]);
				
			}
			getchar();
		}
		for(int l=1;l<n+1;l++){
			for(int y=1;y<m+1;y++){
				if(a[l][y]=='P'){
					if(a[l-1][y-1]=='*') continue;
					else if(a[l-1][y]=='*'){
						y+=1;
						continue;
					}else if(a[l-1][y+1]=='*'){
						y+=2;
						continue;
					}else if(a[l][y-1]=='*') continue;
					else if(a[l][y+1]=='*'){
						y+=2;
						continue;
					}else if(a[l+1][y-1]=='*') continue;
					else if(a[l+1][y]=='*'){
						y+=1;
						continue;
					}else if(a[l+1][y+1]=='*'){
						y+=2;
						continue;
					}else sum+=1;
				}
			}
		}
		printf("%ld\n",sum);
	}
	return 0;
} 
