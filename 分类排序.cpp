#include<stdio.h>
int main(){
	int n,i=0,l=0,p=0,q=0,h,j,num;
	scanf("%d",&n);
	int m[n][100],a[n][100],b[n][100];
	char ch[100];
	for(;i<n;i++){
		for(p=0,q=0,l=0;l<100;l++){
			scanf("%d%c",&m[i][l],&ch[l]);
			if(m[i][l]%2==1){
				a[i][p]=m[i][l];
				p++;}	
		    else if(m[i][l]%2==0){
			    b[i][q]=m[i][l];
		        q++;}        
			if(ch[l]=='\n') break;
			else continue;
		}
				for(h=0;h<p-1;h++){
				for(j=0;j<p-h-1;j++){
					if(a[i][j]>a[i][j+1]){
						num=a[i][j];
						a[i][j]=a[i][j+1];
						a[i][j+1]=num;
					}
				}
			}
				for(h=0;h<q-1;h++){
				for(j=0;j<q-h-1;j++){
					if(b[i][j]>b[i][j+1]){
						num=b[i][j];
						b[i][j]=b[i][j+1];
						b[i][j+1]=num;
					}
				}
			}
		for(l=0;l<p;l++){
			printf("%d ",a[i][l]);
		}
		for(l=0;l<q;l++){
			printf("%d ",b[i][l]);
		}
		printf("\n");
		
	}

	return 0;
}
