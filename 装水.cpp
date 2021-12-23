#include<stdio.h>
int main(){
    long N;
    scanf("%ld",&N);
    long long arr[N],sum=0;
    long i,left,right,m=0,n=N-1;
    for(i=0;i<N;i++){
        scanf("%lld",&arr[i]);
    }
    left=arr[0];right=arr[N-1];
    for(;m<n-1;){
        if(left<=right){
            m++;
            if(arr[m]>=left){
                left=arr[m];
            }else{
                sum+=left-arr[m];
            }
        }else{
            n--;
            if(arr[n]>=right){
                right=arr[n];
            }else{
                sum+=right-arr[n];
            }
        }
    }
    printf("%lld",sum);
    return 0;
}
