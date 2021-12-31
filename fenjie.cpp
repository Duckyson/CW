//分解质因数2.0
#include<stdio.h>

void f(int a, int shuzu[], int n) {    //n是数组元素的个数
    int l = 2;
    for (l = 2; l < a; l++) {
        if (a % l) continue;
        else break;
    }
    if (l == a) {
        printf("%d\n", a);
        return ;
    }
    for (int i = 0; i < n; i++) {
        if (a % shuzu[i] == 0) {
            printf("%d*", shuzu[i]);
            int q = a / shuzu[i];
            f(q, shuzu, n);             //注意此处后两个形参的样子
        }
        else continue; 
    }
}

int main(void) {
    int n = 0;
    scanf("%d", &n);


    int prime[1000]={2};                       //正确 
    int c=1; //c是质数数组的下标
    for (int i = 3; i < 1000; i++) {    //判断i是不是质数 
        int j = 2;
        for (j=2; j < i; j++) {
            if (i % j)  continue;
            else break;
        }
        if (i == j) {
		prime[c++] = i;
	//	printf("%5d",i);
    	}
	} 


    for (int i = 0; i < n; i++) {
        int a = 0;
        scanf("%d", &a);
        f(a,prime,c);
    }

    return 0;
}
