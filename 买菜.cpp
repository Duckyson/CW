#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int s1[n],s2[n],e2[n],e1[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&s1[i],&e1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d %d",&s2[i],&e2[i]);
	}
	for(int i=0,l=0;i<n&&l<n;){
		if(s2[l]>e1[i]) i++;
		else if(s1[i]>e2[l]) l++;	
		else if(s2[l]>=s1[i]){
			if(e2[l]>e1[i]){
				sum+=e1[i]-s2[l];
				i++;
			}else{
				sum+=e2[l]-s2[l];
				l++;
			}
		}else{
			if(e2[l]>e1[i]){
				sum+=e1[i]-s1[i];
				i++;
			}else{
				sum+=e2[l]-s1[i];
				l++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
