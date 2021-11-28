#include<stdio.h>
int max(int n,int ch[]){
    int ma=ch[0];
    int i=0;
    int num=0;
    for (i=0;i<n-1;i++){
        if(ma<ch[i+1]){
            ma=ch[i+1];
            num=i+1;
        }
    }
    return num;
}
int main(){
    int k,m,n,i;
    scanf("%d",&n);
    int alicevalues[n],bobvalues[n],sumvalue[n],alice,bob;
    for(i=0;i<n;i++){
        scanf(" %d",&alicevalues[i]);
    }
    for(i=0;i<n;i++){
        scanf(" %d",&bobvalues[i]);
    }
    for(i=0;i<n;i++){
        sumvalue[i]=alicevalues[i]+bobvalues[i];
    }
    for(i=n;i>0;i--){
        m=max(n,sumvalue);
        alice+=alicevalues[m];
        sumvalue[m]=0;
        i=i-1;
        if(i>0){
            k=max(n,sumvalue);
            bob+=bobvalues[k];
            sumvalue[k]=0;
        }else break;
    }
    if(alice>bob) printf("alice win");
    if(alice==bob) printf("bob win");
    if(alice<bob) printf("equal");
    return 0;
}