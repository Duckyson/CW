#include<bits/stdc++.h>
using namespace std;

long long S,n,a[520000];
double ave,ave1,sum=0;

int main(){
    cin>>n>>S;
    for(long long i = 1; i <= n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ave=ave1=S/n;
    for(long long i = 1; i <= n; i++){
        if(a[i]<ave1){
            ave1+=(ave1-a[i])/(n-i);
            sum+=pow((ave-a[i]),2);
        }else{
            break;
        }
    }
    printf("%.4lf",sqrt(sum/n));
}