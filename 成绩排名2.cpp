
/* �ýṹ��ʵ�� */
#include <stdio.h>
 
typedef struct
{  /* ���10���ַ�����'\0' */
    char name[11];
    char id[19];
    int  score;
}Stu;
 
int main ()
{   
  int i = 0;
  int val = 0;
  Stu max, min, temp;
  max.score = -1;
  min.score = 101;
 
  if(scanf("%d", &val)!=EOF)
  {
    for (i=0; i<val; i++)
    {
        if(scanf ("%s %s %d", temp.name, temp.id, &temp.score)!=EOF)
        {
          if (temp.score < min.score)
          {
              min = temp;
          } 
          if (temp.score > max.score)
          {
              max = temp;
          } 
        }
        else
          return -1;
    }
      printf ("%s %s\n",max.name, max.id);
      printf ("%s %s\n",min.name, min.id);
      return 0;
  }
  return -1;
}
