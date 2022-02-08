#include<stdio.h>
int a[1000010];
int find(int x){
    if(a[x]!=x){
        a[x]=find(a[x]);
    }
    return a[x];
}

int main(){
    int N,f;
    scanf("%d",&N);
    for(int i=1;i<=1000010;i++){
        a[i]=i;
    }
    for(int i=1;i<=N;i++){
        scanf("%d",&f);
        if(a[f]==f) {
            printf("%d ",f);
        }
        else{
            f=find(a[f]);
            printf("%d ",find(a[f]));
        }
        a[f]++;
    }
    return 0;
}
