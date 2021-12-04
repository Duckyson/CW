#include<stdio.h>

int swap(int *a,int b){
	int i=0,l=1,n;
	for(i=0;i<b;i++){
		for(l=1;l<b-i;l++){
			if(*(a+i)>*(a+i+l)){
				n=*(a+i);
				*(a+i)=*(a+i+l);
				*(a+i+l)=n;
			}
		}
	}
	return *(a+(b-1)/2);
}

int main(){
    
	int w,n,i,l=0;
	
	while(scanf("%d %d",&w,&n)!=EOF){
	int a[n],b[w],c[n],m=0;
	for(i=0;i<n;i++){
			scanf(" %d",&a[i]);
			c[i]=a[i];
		}
	if(w%2==0){
		printf("ERROR\n");
	}else{
		
		for(i=(w-1)/2;i<n-(w-1)/2;i++){
			for(l=0;l<w;l++){
				b[l]=c[l+m];	
			}m++;
			l=0;
			a[i]=swap(&b[l],w);
		}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	}
	}
	return 0;
}
