//��̬�ڴ���������
#include <stdio.h>  /* printf, scanf, NULL */
#include <stdlib.h>  /* malloc, free, rand, system */
#include<time.h>/*time(NULL)*/

int main ()
{
    int i,n;
    char * buffer;

    printf ("�����ַ����ĳ��ȣ�");
    scanf ("%d", &i);
    
    srand((unsigned)time(NULL));

    buffer = (char*)malloc(i+1);  // �ַ��������� \0
    if(buffer==NULL) exit(1);  // �ж��Ƿ����ɹ�

    // ��������ַ���
    for(n=0; n<i; n++)
        buffer[n] = rand()%26+'a';
    buffer[i]='\0';

    printf ("������ɵ��ַ���Ϊ��%s\n",buffer);
    free(buffer);  // �ͷ��ڴ�ռ�

    system("pause");
    return 0;
}
/*���н����
�����ַ����ĳ��ȣ�20
������ɵ��ַ���Ϊ��phqghumeaylnlfdxfirc*/
