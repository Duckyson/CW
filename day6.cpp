#include<stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	int s=0,middle=0,l=1,m=0,sum=0;
	int A[n+10];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++){
		if(A[i]!=0&&l==1){
			if(s==0)
            {
                s=A[i];
                sum++;
            }
			
			l=0;
			for(int j=i+1;j<n;j++){
				if(A[j]==0){
					l=1;
                    i=j;
                    s=0;
					break;
				}else if(A[j]>s) s=A[j];
				else{
					middle=A[j];
					for(int m=j+1;m<n;m++){
						if(A[m]<=middle) middle=A[m];
						else if(A[m]>middle){
							sum++;
							s=A[m];
							i=m;
                            l=1;
							break;
						}
						else {
                            s=0;
                            break;}
					}
					break;
				}
			}
		}
        else s=0;
	}
	printf("%d",sum);
	return 0;
}
