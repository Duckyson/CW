#include<stdio.h>
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    int a[N],i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int left=0,right=0,max=0;
    for(;left<N;left++){
        for(;right<N&&a[right]-a[left]<K;right++){
            
            }
        if(max<right-left){
                max=right-left;
    }
        }
    printf("%d",max);
    return 0;
}
