#include<iostream>
using namespace std;
int main(){
	int m=1,i=0,l=0;
	char board[11][11];
	cout<<"��ӭ����Ducky������"<<endl;
	cout<<"1 ���º���"<<endl;
	cout<<"2 ���°���"<<endl;
	cout<<"0 �˳���Ϸ"<<endl; 
	for(i=0;i<11;i++){
		for(l=0;l<11;l++){
			board[i][l]='#';}}
			while(m){
				cin>>m;
				switch(m){
				case 1:{
					cout<<"����������x����";
					cin>>i;
					cout<<"����������y����";
					cin>>l;
					board[i-1][l-1]='*';
					for(i=0;i<11;i++){
	                	for(l=0;l<11;l++){
	                    cout<<board[i][l]<<" ";
	                 	}
	                cout<<endl;}
					break;}
				case 2:{
					cout<<"����������x����";
					cin>>i;
					cout<<"����������y����";
					cin>>l; 
					board[i-1][l-1]='O';
				    for(i=0;i<11;i++){
	                	for(l=0;l<11;l++){
                	    cout<<board[i][l]<<" ";
                    	}
                	cout<<endl;}
					break;}
				default: break;}}
		 	    for(i=0;i<11;i++){
            		for(l=0;l<11;l++){
            	    cout<<board[i][l]<<" ";
            		}
          	    cout<<endl;}
		return 0;	
}
