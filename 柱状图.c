#include<stdio.h>
int max(int n,int c[n]){
	int p,q;
	for(p=0;p<n-1;p++){
		if(c[p]>c[p+1]){
			q=c[p];
			c[p]=c[p+1];
			c[p+1]=q;
		}
	}return c[n-1];
}
int min(int h,int c[h]){
	int r,e;
	for(e=0;e<h-1;e++){
		if(c[e]<c[e+1]){
			r=c[e];
			c[e]=c[e+1];
			c[e+1]=r;
		}
    }return c[h-1];
}
int main(){
	int m,i,l=0,x=0,y=0,n,g;
	scanf("%d",&m);
	getchar();
    int c[m],d[m];
	char a[m];
		for(i=0;i<m;i++){
		scanf(" %d%c",&c[i],&a[i]);
	}
	for(i=0;i<m;i++){
		d[i]=c[i];
	}
	if(min(m,d)<0)
	g=max(m,d)-min(m,d)+1;
	else g=max(m,d)+1;
    char b[31][20];
		for(i=0;i<g;i++){
		for(l=0;l<2*m-1;l++){
			b[i][l]=' ';
		} }   
	for(l=0;l<2*m-1;l++){
		b[max(m,d)][l]='-';
    }
	for(l=0;l<2*m-1;l+=2){
		i=max(m,d);
		if(c[x]<0){
			for(n=0;n<(0-c[x]);n++){
                if(a[x]!='\n'&&a[x]!=' '){
					b[++i][l]=a[x];}
					else
					b[++i][l]='+';
			}
		}
		else if(c[x]==0){
			goto end;
		}
		else for(n=0;n<c[x];n++){
			    if(a[x]!='\n'&&a[x]!=' '){
	    	    b[--i][l]=a[x];}
				else	
				b[--i][l]='+';			
		}
end:		
		x++;
	}
	for(i=0;i<g;i++){
		for(l=0;l<2*m-1;l++){
			printf("%c",b[i][l]);
		}
		printf("\n");
	}
	return 0;
}	
