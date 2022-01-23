#include<iostream>
using namespace std;
int main(){
	int n,j=0,sum=0;
	long long N;
	cin>>n>>N;
	int A[n+1],f[N];
	A[0]=0;
	for(int i=1;i<n+1;i++){
		cin>>A[i];
	}
	for(int i=1;i<n+1;i++){
		sum+=(A[i]-A[i-1])*j;
		j++;
	}
	sum+=n*(N-A[n]);
	cout<<sum;
	return 0;
}
