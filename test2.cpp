#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long N,n,i=0,j=1,sum=0,r=0;
	cin>>n>>N;
	long long A[n+2],f[N];
	A[0]=0;A[n+1]=N+1;
	for(i=1;i<n+1;i++){
		cin>>A[i];
	}
	r=N/(n+1);
	for(i=0;i<N;i++){
		for(;;j++){
			if(i<A[j]){
			f[i]=j-1;
			break;
		}
	}sum+=abs(f[i]-i/r);
		}
		
	cout<<sum;
	return 0;
}
