#include<stdio.h>
#include<math.h>
#include<stdbool.h>

double hen(double x1,double x2,double x3,double y1,double y2,double y3){
	 double a = x1 - x2;
    double b = y1 - y2;
    double c = x1 - x3;
    double d = y1 - y3;
	 double e = ((x1 * x1 - x2 * x2) - (y2 * y2 - y1 * y1)) / 2;
    double f = ((x1 * x1 - x3 * x3) - (y3 * y3 - y1 * y1)) / 2;

    double x = (e * d - b * f) / (a * d - b * c); //圆心x坐标
    return x;
}

double zong(double x1,double x2,double x3,double y1,double y2,double y3){
	  double a = x1 - x2;
    double b = y1 - y2;
    double c = x1 - x3;
    double d = y1 - y3;
	  double e = ((x1 * x1 - x2 * x2) - (y2 * y2 - y1 * y1)) / 2;
    double f = ((x1 * x1 - x3 * x3) - (y3 * y3 - y1 * y1)) / 2;

    double y = (a * f - e * c) / (a * d - b * c); //圆心y坐标
    return y;
}

int main(){
	int n,i,b,c=0,d=1;
	scanf("%d",&n);
	double a[n][2],x,y,r1,r2,r3,x1,x2,y1,y2;
	for(i=0;i<n;i++){
		scanf("%lf %lf",&a[i][0],&a[i][1]);
	}
	x=(a[0][0]+a[1][0])/2;y=(a[0][1]+a[1][1])/2;
	r1=sqrt(pow(x-a[0][0],2)+pow(y-a[0][1],2));
	for(i=2;i<n;i++){
		if(pow(x-a[i][0],2)+pow(y-a[i][1],2)>pow(r1,2)){
			if(pow(a[c][0]-(a[d][0]+a[i][0])/2,2)+pow(a[c][1]-(a[d][1]+a[i][1])/2,2)<=pow(a[d][0]-a[i][0],2)/4+pow(a[d][1]-a[i][1],2)/4){
				x=(a[d][0]+a[i][0])/2;y=(a[d][1]+a[i][1])/2;r1=sqrt(pow(a[d][0]-a[i][0],2)/4+pow(a[d][1]-a[i][1],2)/4);
				b=c;c=d;d=i;
				continue;
			}else if(pow(a[d][0]-(a[c][0]+a[i][0])/2,2)+pow(a[d][1]-(a[c][1]+a[i][1])/2,2)<=pow(a[c][0]-a[i][0],2)/4+pow(a[c][1]-a[i][1],2)/4){
				x=(a[c][0]+a[i][0])/2;y=(a[c][1]+a[i][1])/2;r1=sqrt(pow(a[c][0]-a[i][0],2)/4+pow(a[c][1]-a[i][1],2)/4);
				b=d;d=i;
				continue;
			}
			x=hen(a[c][0],a[d][0],a[i][0],a[c][1],a[d][1],a[i][1]);y=zong(a[c][0],a[d][0],a[i][0],a[c][1],a[d][1],a[i][1]);
			r1=sqrt(pow(x-a[c][0],2)+pow(y-a[c][1],2));
			if(pow(x-a[b][0],2)+pow(y-a[b][1],2)>pow(r1,2)){
				r1=10000;
			}
			x1=hen(a[b][0],a[d][0],a[i][0],a[b][1],a[d][1],a[i][1]);y1=zong(a[b][0],a[d][0],a[i][0],a[b][1],a[d][1],a[i][1]);
			r2=sqrt(pow(x1-a[b][0],2)+pow(y1-a[b][1],2));
			if(pow(x1-a[c][0],2)+pow(y1-a[c][1],2)>pow(r2,2)){
				r2=10000;
			}
			x2=(a[b][0],a[c][0],a[i][0],a[b][1],a[c][1],a[i][1]);y2=(a[b][0],a[c][0],a[i][0],a[b][1],a[c][1],a[i][1]);
			r3=sqrt(pow(x2-a[b][0],2)+pow(y2-a[b][1],2));
			if(pow(x2-a[d][0],2)+pow(y2-a[d][1],2)>pow(r3,2)){
				r3=10000;
			}
			if(r1<=r2&&r1<=r3){
				b=c;c=d;d=i;
			}else if(r2<r3){
				c=b;b=d;d=i;
				r1=r2;
				x=x1;y=y1;
			}else{
				d=b;b=c;c=i;
				r1=r3;
				x=x2;y=y2;
			}
		}
	}
	printf("%.3lf %.3lf\n%.3lf",fabs(x),fabs(y),fabs(r1));
	return 0;
}
