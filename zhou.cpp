#include<stdio.h>
#include<math.h>
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    double zhou=0,c[3];
    c[0]=pow(a[0]-a[1],2)+pow(b[0]-b[1],2);
    c[1]=pow(a[0]-a[2],2)+pow(b[0]-b[2],2);
    c[2]=pow(a[2]-a[1],2)+pow(b[2]-b[1],2);
    zhou=sqrt(c[0])+sqrt(c[1])+sqrt(c[2]);
    printf("%.2f",zhou);
    return 0;
}
