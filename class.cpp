#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
    return a;
}
int main(){
    int a=3,b=4;
    swap(a,b);
    cout << a << endl << b << endl;
    return 0;
}