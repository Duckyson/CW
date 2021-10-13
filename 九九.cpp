#include<stdio.h>
int main()
{
	int a=1,b=1;
	while (a<=9)
	{
		printf("%dx%d=%-3d",a,b,a*b);
		if(b==9)
		{
			a++;
			printf("\n");
			b=a;
			continue;
		}
	    b++;	
	}
		
		
}
