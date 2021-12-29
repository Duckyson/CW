
#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[260];
	scanf("%s",a);
	int k;
	cin>>k;
	int len=strlen(a);
	while(k--){
		for(int i=0;i<len-1;i++){
			if(a[i]>a[i+1]){
				for(int j=i;j<len-1;j++){
					a[j]=a[j+1]; 
				}
				break;
			}
		}
		len--;
	}
	long long int sum=0;
	for(int i=0;i<len;i++){
		sum=sum*10+a[i]-48;
	}
	cout<<sum<<endl;
	return 0;
}
    
