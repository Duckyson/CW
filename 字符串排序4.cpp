#include<bits/stdc++.h>
using namespace std;
void Exchange(char **str,int n){
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++){
			//cout<<*(str+i)<<" "<<*(str+j)<<endl;
			if(strcmp(*(str+i),*(str+j))>0){
				char* t=*(str+i);
				*(str+i)=*(str+j);
				*(str+j)=t;
			}
		}
}
int main(){
	char* a[101];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=new char(101);
		cin>>a[i];
	}
	Exchange(a,n);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
		free(a[i]);
	}
	return 0;
}
