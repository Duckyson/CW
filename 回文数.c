#include<stdio.h>
int huiwen(unsigned int a){
    int i,A[10000],B[10000],n,m=0;
    for(i=0;a>0;){
    	if(a/10!=0){
    		A[i]=a%10;
    		a=a/10;
    		i++;
		}
		else{
		A[i]=a%10; 
		break;}
	}
	for(n=0;i>=0;i--){
		B[i]=A[n];
		n++;
	}
	for(i=0;i<n;i++){
		if(A[i]!=B[i]){
			m=1;
			break;
		}else continue;
	}
	if (m==0)
	printf("Yes\n");
	else printf("No\n");
}
int main(){
	unsigned int q,C[10000],z=0;
	printf("");
	scanf("%d",&q);	
	while(q>0){
		scanf("%d",&C[z]);
		q--;
		z++;
	}
	for(z=0;C[z]>0;z++){
		huiwen(C[z]);
	}
	return 0;
}
