#include<stdio.h>
int main (){
	int m,n;
	while(scanf("%d %d",&n,&m)!=EOF){
	    int xu[m][n],wuxu[m];
	    char a[m][n],b[m][n];
		getchar();
	    int i,l,k,j;
	    for(i=0;i<m;i++){
		    for(l=0;l<n;l++){
		    	scanf("%c",&a[i][l]);
		    	xu[i][l]=l;
		    	b[i][l]=a[i][l];
			}getchar();
	    }
	    for(i=0;i<m;i++){
	    	wuxu[i]=0;
	    	for(l=0;l<n-1;l++){
	    		for(k=1;k<n-l;k++){
	    			if(a[i][l]>a[i][l+k]){
	    				j=a[i][l];
	    				a[i][l]=a[i][l+k];
	    				a[i][l+k]=j;
	    				j=xu[i][l];
	    				xu[i][l]=xu[i][l+k];
	    				xu[i][l+k]=j;
					}
				}
			}
			for(l=0;l<n;l++){
				wuxu[i]+=xu[i][l]-l;
			}
		}
		int min;
		for(l=0;l<m;l++){
			min=wuxu[0];
			i=0;
			for(k=1;k<m;k++){
				if(wuxu[k]<min){
					min=wuxu[k];
					i=k;
				}
			}
			for(k=0;k<n;k++){
				printf("%c",b[i][k]);
			}
			wuxu[i]=100000;
			printf("\n");
		}
		printf("********************\n");
    }
}
