#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int a[101010];
struct node
{
    int l,r,val;
    node(int l,int r,int val):l(l),r(r),val(val){}
};
bool cmp(node a,node b){
    if(a.val!=b.val)return a.val>b.val;
    return a.l<b.l;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,i,j,k,t,_=1;
    cin>>_;
    while(_--){
        cin>>n;
        for(i=1;i<=n;i++)cin>>a[i];
        vector<node>p;
        int l=1;
        for(i=2;i<=n;i++){
            if(a[i]<a[i-1]){
                p.push_back(node(l,i-1,a[i-1]-a[l]));
                l=i;
            }
        }
        p.push_back(node(l,n,a[n]-a[l]));
        sort(p.begin(),p.end(),cmp);
        for(i=0;i<p.size();i++){
            if(p[i].val==p[0].val)cout<<p[i].l<<" "<<p[i].r<<" ";
        }
        cout<<'\n';
        
    }
}
