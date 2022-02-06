#include<bits/stdc++.h>
using namespace std;

void timejudge(long long *time, long a, long b);

long r,y,g;
long n,a[101000]={0},b[101000]={0};
long long timenow=0;

int main (){
	cin>>r>>y>>g;
	cin>>n;
	for(long i = 0; i < n; i++){
		cin>>a[i]>>b[i];
		timejudge(&timenow,a[i],b[i]);
	}
	cout<<timenow;
}

void timejudge(long long *time, long a, long b){
	if(a==0){
		(*time)+=b;
	}else if(a==1){
		if(((*time)%(r+y+g))>=(b)&&((*time)%(r+y+g))<(b+g)) (*time)+=0;
		else if(((*time)%(r+y+g))<(b)) (*time)+=(b)-((*time)%(r+y+g));
		else (*time)+=(r+b+y+g)-(((*time)%(r+y+g)));
	}else if(a==2){
		if(((*time)%(r+y+g))>=(b+r)&&((*time)%(r+y+g))<(b+r+g)) time+=0;
		else if(((*time)%(r+y+g))<(b+r)) (*time)+=(b+r)-(((*time)%(r+y+g)));
		else (*time)+=(2*r+b+y+g)-(((*time)%(r+y+g)));
	}else{
		if(((*time)%(r+y+g))>=(b)&&((*time)%(r+y+g))<(b+y+r)) (*time)+=(b+y+r)-(((*time)%(r+y+g)));
		else (*time)+=0;
	}
}
