#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main() {
	int n,m;
   	scanf("%d %d",&n,&m);   	
   	char str1[n+1] ;
   	char str2[m+1];
	scanf("%s",str1);	
    scanf("%s",str2);
   	
    if (n!=m) {
       printf("NO");
       return 0;
    }
    else  {
        char str[n+m+2];
	strcat(str,str1);
	strcat(str,str1);
        if (strstr(str,str2)!=NULL) {
              printf("YES");
        }
        else {	
          printf("NO");
		}
          
    }
    return 0;
}

