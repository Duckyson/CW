#include<iostream>
using namespace std;
int max(int a,int b){
	int *p1,*p2;
	p1=&a;p2=&b;
	if(*p1>*p2){
		return *p1;
	}
	return *p2;
}
int main(){
	int a=1,b=2;
	cout<<max(a,b);
}
