#include<stdio.h>
#include<stdbool.h>

bool fei(int a){
	int i[2]={1,2},b;
	if(a==1||a==2){
		return true;
	}
	while(a>i[0]&&a>i[1]){
		b=i[0];
		i[0]=i[1];i[1]=b+i[1];
		if(a==i[1]){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(fei(i)){
			printf("O");
		}else{
			printf("o");
		}
	}
	return 0;
} 
