#include <stdio.h> 
int length(char*p);
int main()
{
int len;
char str[20]; 
printf("please input a string:\n");
scanf("%s", str);

len = length(str);
if (len == 10)
{
     for (int i = len; i > 0; i--)
     {
           printf("%c", str[i-1]); 
}
}
else
{
     printf("%s\n", str);
}
}

int length(char *p)
{
int n;      
while (*p!='\0') 
{
     n++;
     p++;

}return n;
}
