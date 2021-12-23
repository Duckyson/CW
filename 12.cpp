//计数1的个数
//f(n)=f(n-1)+n中1的个数
#include<stdio.h>
int f(int n) {
    int add=0,m=n, j;   //j是n本身中i=1的个数，add是和
    if (n == 1) {
        return  1;
    }
    else {
        j = 0;
        while (n > 0) {
            if ((n % 10) == 1) j++;
            n = (n-(n % 10)) / 10;
           // printf("%d",j);
        }
        add = f(m - 1) + j;
    return add;
 
   }
}
int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d", f(a));
    return 0;
}
