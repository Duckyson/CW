#include<stdio.h>
#include<math.h>
void cmp(long a,long b){
	if(a>b){
		printf(">\n");
	}else if(a==b){
		printf("=\n");
	}else{
		printf("<\n");
	}
	return;
}
int main(){
	int i,t;
	scanf("%d",&t);
	long x1[t],p1[t],x2[t],p2[t],p3[t];
	long long sum1[t],sum2[t];
	for(i=0;i<t;i++){
		scanf("%ld %ld",&x1[i],&p1[i]);
		scanf("%ld %ld",&x2[i],&p2[i]);
	}
	for(i=0;i<t;i++){
		 if(p1[i]>p2[i]){
	    	p3[i]=p1[i]-p2[i];
	    	if(p3[i]>6){
	    		printf(">\n");
			}else{
	    	sum1[i]=x1[i]*pow(10,p3[i]);
	    	sum2[i]=x2[i];
	    	cmp(sum1[i],sum2[i]);}
		}else if(p1[i]<p2[i]){
	    	p3[i]=p2[i]-p1[i];
	    	if(p3[i]>6){
	    		printf("<\n");
			}else{
	    	sum1[i]=x1[i];
	    	sum2[i]=x2[i]*pow(10,p3[i]);
	    	cmp(sum1[i],sum2[i]);
			}
		}else if(p1[i]==p2[i]){
			cmp(x1[i],x2[i]);
		}
	}
	return 0;
}
