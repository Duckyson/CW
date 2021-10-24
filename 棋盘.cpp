#include<iostream>
using namespace std;
int main(){
	int m=1,i=0,l=0;
	char board[11][11];
	cout<<"»¶Ó­À´µ½DuckyµÄÆåÅÌ"<<endl;
	cout<<"1 ÇëÏÂºÚÆå"<<endl;
	cout<<"2 ÇëÏÂ°×Æå"<<endl;
	cout<<"0 ÍË³öÓÎÏ·"<<endl; 
	for(i=0;i<11;i++){
		for(l=0;l<11;l++){
			board[i][l]='#';}}
			while(m){
				cin>>m;
				switch(m){
				case 1:{
					cout<<"ÇëÊäÈëºÚÆåµÄx×ø±ê";
					cin>>i;
					cout<<"ÇëÊäÈëºÚÆåµÄy×ø±ê";
					cin>>l;
					board[i-1][l-1]='*';
					for(i=0;i<11;i++){
	                	for(l=0;l<11;l++){
	                    cout<<board[i][l]<<" ";
	                 	}
	                cout<<endl;}
					break;}
				case 2:{
					cout<<"ÇëÊäÈë°×ÆåµÄx×ø±ê";
					cin>>i;
					cout<<"ÇëÊäÈë°×ÆåµÄy×ø±ê";
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
