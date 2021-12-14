#include<stdio.h>
int main(){
	int i,T,m,n;
	
	scanf("%d",&T);
	getchar();
	int is[T];
	for(i=0;i<T;i++){
		is[i]=1;
		char a[8][14];int b[8][14];
		for(m=1;m<7;m++){
			for(n=1;n<10;n++){
				scanf("%c",&a[m][n]);
				b[m][n]=0;
				
			}getchar();
		}
		for(m=1;m<7;m++){
			for(n=1;n<10;n++){
				if(a[m][n]=='1'){
					b[m][n+1]+=1;b[m][n+2]+=1;b[m][n+3]+=1;b[m][n+4]+=1;
				}else if(a[m][n]=='2'){
					b[m-1][n]+=1;b[m-1][n+1]+=1;b[m-1][n-1]+=1;b[m][n-1]+=1;b[m][n+1]+=1;b[m+1][n]+=1;b[m+1][n-1]+=1;b[m+1][n+1]+=1;b[m][n]+=1;
				}else if(a[m][n]=='3'){
					b[m-1][n]+=2;b[m-1][n+1]+=2;b[m-1][n-1]+=2;b[m][n-1]+=2;b[m][n+1]+=2;b[m+1][n]+=2;b[m+1][n-1]+=2;b[m+1][n+1]+=2;b[m][n]+=2;
				}else if(a[m][n]=='4'){
					b[m][n]+=2;
				}
			}
		}
		for(m=1;m<7;m++){
			for(n=1;n<10;n++){
				if(a[m][n]!='0'){
					if(b[m][n]<2){
						is[i]=0;break;
					}
				}
			}
		}getchar();
	}
	for(i=0;i<T;i++){
		if(is[i]==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
