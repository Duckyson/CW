#include<iostream>
using namespace std;
#include<cmath>
int main(){
	int n,k,t,x1,x2,y1,y2;
	int sum=0,dou=0,pan=0,pang=1,ole=0,fmax=0;
	cin>>n>>k>>t>>x1>>y1>>x2>>y2;
	int a[n][1010];
	for(int i=0;i<n;i++){
		for(int l=0;l<2*t-1;l+=2){
			cin>>a[i][l]>>a[i][l+1];
			if((a[i][l]>=x1&&a[i][l]<=x2)&&(a[i][l+1]>=y1&&a[i][l+1]<=y2)&&pan==0){
				pan++;
				if(ole==0) sum++;
				ole++;
			}else if((a[i][l]>=x1&&a[i][l]<=x2)&&(a[i][l+1]>=y1&&a[i][l+1]<=y2)&&pan!=0){
				pang++;
			}else{
				pang=1;
				pan=0;
			}
			fmax=max(fmax,pang);
		}
		if(fmax>=k&&ole!=0) dou++;
		fmax=0;
	    ole=0;
		pang=1;
		pan=0;
	}
	cout<<sum<<endl<<dou<<endl;
}
