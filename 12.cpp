//����1�ĸ���
//f(n)=f(n-1)+n��1�ĸ���
#include<stdio.h>
int f(int n) {
    int add=0,m=n, j;   //j��n������i=1�ĸ�����add�Ǻ�
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
