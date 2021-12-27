#include<stdio.h>
#include<math.h>
 
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int num=0,l=0;
    for(int i=0;i<gSize;i++){
        for(;l<sSize;l++){
            if(s[l]>=g[i]){
                num++;
                break;
            }   
        }
        l++;
            if(l>=sSize)
                break;
    }
    return num;
}

