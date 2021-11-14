#include<iostream>
using namespace std;
void swap(int *p1,int *p2){
	int n = *p1;
	*p1 = *p2;
	*p2 = n;
}
int main(){
	int a = 2,b = 3;
	int *p1,*p2;
	p1=&a;p2=&b;
	swap(*p1,*p2);
	cout<<*p1<<" "<<*p2<<endl;
	return 0;
}
