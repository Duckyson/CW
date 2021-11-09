#include<stdio.h>
#include<string.h>
int main(){
	int r,c,i,l;
	scanf("%d %d",&r,&c);
	int a[100][100];
	for(i=0;i<r;i++){
		for(l=0;l<c;l++){
			scanf("%d",&a[i][l]);
		}
	}
	int n,x,y;
	char str[3];
	scanf("%d",&n);
	for(;n>0;n--){
		getchar();
		scanf("%s",&str);
		if(strcmp(str,"SR")==0){
			scanf("%d %d",&x,&y);
			int b[c];
			for(i=0;i<c;i++){
				b[i]=a[x-1][i];
				a[x-1][i]=a[y-1][i];
				a[y-1][i]=b[i];
			}
		}else
		if(strcmp(str,"SC")==0){
			scanf("%d %d",&x,&y);
			int d[r];
			for(i=0;i<r;i++){
				d[i]=a[i][x-1];
				a[i][x-1]=a[i][y];
				a[i][y-1]=d[i];
			}
		}else
		if(strcmp(str,"DR")==0){
			scanf("%d",&x);
			for(i=x-1;i<r-1;i++){
				for(l=0;l<c;l++){
					a[i][l]=a[i+1][l];
				}
			}
			r=r-1;
		}else
		if(strcmp(str,"DC")==0){
			scanf("%d",&y);
			for(i=0;i<r;i++){
				for(l=y-1;l<c-1;l++){
					a[i][l]=a[i][l+1];
				}
			}
			c=c-1;
		}else
		if(strcmp(str,"IR")==0){
			scanf("%d",&x);
			for(i=r;i>x-1;i--){
				for(l=0;l<c;l++){
					a[i][l]=a[i-1][l];
				}
			}
			for(l=0;l<c;l++){
				a[i][l]=0;
			}
			r=r+1;
		}else
		if(strcmp(str,"IC")==0){
			scanf("%d",&y);
			for(i=0;i<r;i++){
				for(l=c;l>y-1;l--){
					a[i][l]=a[i][l-1];
				}
			}
			for(i=0;i<r;i++){
				a[i][l]=0;
			}
			c=c+1;
		}
	}
	for(i=0;i<r;i++){
		for(l=0;l<c;l++){
			printf("%d ",a[i][l]);
		}
		printf("\n");
	}
	return 0;
}
