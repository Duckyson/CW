#include<stdio.h>
int main(){
	int L=0,n=0;
	int m=3,sum=2,l=1;
	scanf("%d",&L);
	if(L==1)
	printf("0");
	else if(L==2)
	printf("2\n");
	else printf("2\n");
    while (sum<L){
		for(n=2;n<m;n++)
			if(m%n==0)
			goto Re;
		sum+=m;
		if(sum>L)
		break;
		printf("%d\n",m);
		l++;
	Re:
		m++;
	}
	printf("%d",l);
	return 0;
}
