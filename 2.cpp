#include<stdio.h>
#include <stdlib.h>
int sub(int *s);
int main()
{  
  int i,k;
for (i =0;i<4;i++)
{
k = sub(&i);
printf("%d ",k);
}
return 0;
}
int sub(int *s)
{
 int t = 0;
t = *s +t;
return t;
}

