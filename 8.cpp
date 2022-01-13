	#include<stdio.h>
void change(int x, int y, int *z) 
{
	int t;
	t=x;
	x=t;
	y=*z;
	*z=t;
}
int main()
{
	int a=45, b=89, c=23;
	change(a,b,&c);
	printf("b=%d, c=%d\n",b, c);
	return 0;
}

