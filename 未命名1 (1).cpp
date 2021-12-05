#include<stdio.h>
#include<string.h>
#include<math.h>
double x,y,r2,r1=1.00000;
void mincircle(double a[][2],int n){
	int i,m,l,p=0,o,u=0;
	double d1,d2,e1,e2,e3,e4,e5,e6;
	x=a[p][0];
	y=a[p][1];
	r2=0;
	for(i=0;i<n;i++){
		if((a[i][0]-x)*(a[i][0]-x)+(a[i][1]-y)*(a[i][1]-y)>r2){
			x=a[i][0];
			y=a[i][1];
			r2=0;
			for(m=0;m<i;m++){
				if((a[m][0]-x)*(a[m][0]-x)+(a[m][1]-y)*(a[m][1]-y)>r2){
					x=(a[i][0]+a[m][0])/2;
					y=(a[i][1]+a[m][1])/2;
					r2=((a[i][0]-a[m][0])*(a[i][0]-a[m][0])+(a[i][1]-a[m][1])*(a[i][1]-a[m][1]))/4;
					for(l=0;l<m;l++){
						if((a[l][0]-x)*(a[l][0]-x)+(a[l][1]-y)*(a[l][1]-y)>r2){
							if((a[l][1]-a[i][1])*(a[m][0]-a[i][0])==(a[m][1]-a[i][1])*(a[l][0]-a[i][0])){
								d1=(a[i][0]-a[m][0])*(a[i][0]-a[m][0])+(a[i][1]-a[m][1])*(a[i][1]-a[m][1]);
								d2=(a[l][0]-a[m][0])*(a[l][0]-a[m][0])+(a[l][1]-a[m][1])*(a[l][1]-a[m][1]);
								if(d1>=d2){
									x=(a[i][0]+a[m][0])/2;
									y=(a[i][1]+a[m][1])/2;
									r2=((a[i][0]-a[m][0])*(a[i][0]-a[m][0])+(a[i][1]-a[m][1])*(a[i][1]-a[m][1]))/4;
								}else{
									x=(a[l][0]+a[m][0])/2;
									y=(a[l][1]+a[m][1])/2;
									r2=((a[l][0]-a[m][0])*(a[l][0]-a[m][0])+(a[l][1]-a[m][1])*(a[l][1]-a[m][1]))/4;
								}
							}else if((a[l][1]-a[i][1])*(a[m][0]-a[i][0])!=(a[m][1]-a[i][1])*(a[l][0]-a[i][0])){
								e1=a[i][0]-a[m][0];
								e2=a[i][1]-a[m][1];
								e3=a[i][0]-a[l][0];
								e4=a[i][1]-a[l][1];
								e5=((a[i][0]*a[i][0]-a[m][0]*a[m][0])-(a[m][1]*a[m][1]-a[i][1]*a[i][1]))/2;
								e6=((a[i][0]*a[i][0]-a[l][0]*a[l][0])-(a[l][1]*a[l][1]-a[i][1]*a[i][1]))/2;
								x=fabs((e2*e6-e4*e5))/fabs((e2*e3-e1*e4));
								y=fabs((e3*e5-e1*e6))/fabs((e2*e3-e1*e4));
								r2=(a[l][0]-x)*(a[l][0]-x)+(a[l][1]-y)*(a[l][1]-y);
							}
							for(o=0;o<n;o++){
								u++;
								if((a[o][0]-x)*(a[o][0]-x)+(a[o][1]-y)*(a[o][1]-y)>r2){
									break;
									p++;
								}
							}
							if(u==n) return;
						}
					}
				}
			}
		}
	}
}
int main(){
	int m,n,i,k;
	double a[100000][2];//1为包含，0为不包含 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(m=0;m<2;m++){
			scanf("%lf",&a[i][m]);
		}
	}
	if(n==2){
		x=(a[0][0]+a[1][0])/2;
		y=(a[0][1]+a[1][1])/2;
		r2=((a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][0]-a[1][1])*(a[0][1]-a[1][1]))/4;
	}else mincircle(a,n);
	r1=sqrt(r2);
	printf("%.3lf %.3lf\n",x,y);
	printf("%.3lf\n",r1);
	return 0;
}

