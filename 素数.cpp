#include<iostream>
using namespace std;
int main()
{
	int n=0,m=0,x=0;
	cin>>n;
	for (m=2;m<n;m++)
	{
		if(n%m==0)
		x++;
	}
	if(x>0)
	cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;
	return 0;
}
