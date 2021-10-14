#include<stdio.h>
#define TIJI (4.0f/3.0f)
#define PAI 3.14f
int main(void){
	int r;
	float v;
	printf("r:");
	scanf("%d",&r);
	v=TIJI*PAI*r*r*r;
	
	printf("v:%f\n",v);
	return 0;
}
