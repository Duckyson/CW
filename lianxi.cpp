//求多组数据中的最大值 
#include<stdio.h>
int main()
{
	float m,n;
	printf("Enter a number:");
	scanf("%f",&m);
	while(m>0)
	{
		printf("Enter a number:");
		scanf("%f",&n);
		if(m<n)
		{
		m=n;
		}
		if(n<=0)
		break;
	}
	printf("The largest number was %f",m);
	return 0;
}
