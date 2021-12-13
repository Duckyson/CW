#include<stdio.h>
#include<math.h>
int main(){
	int a,b,i,l;
	scanf("%d%d",&a,&b);
	int c=abs(a-b);
	int num=0;
	for(i=0,l=1;i<c;i++,l++){
		num+=l;
		i++;
		if(i<c){
			num+=l;
		}
	}
	printf("%d",num);
	return 0;
}
