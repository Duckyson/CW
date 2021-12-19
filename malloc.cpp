//动态内存分配举例：
#include <stdio.h>  /* printf, scanf, NULL */
#include <stdlib.h>  /* malloc, free, rand, system */
#include<time.h>/*time(NULL)*/

int main ()
{
    int i,n;
    char * buffer;

    printf ("输入字符串的长度：");
    scanf ("%d", &i);
    
    srand((unsigned)time(NULL));

    buffer = (char*)malloc(i+1);  // 字符串最后包含 \0
    if(buffer==NULL) exit(1);  // 判断是否分配成功

    // 随机生成字符串
    for(n=0; n<i; n++)
        buffer[n] = rand()%26+'a';
    buffer[i]='\0';

    printf ("随机生成的字符串为：%s\n",buffer);
    free(buffer);  // 释放内存空间

    system("pause");
    return 0;
}
/*运行结果：
输入字符串的长度：20
随机生成的字符串为：phqghumeaylnlfdxfirc*/
