#include<bits/stdc++.h>
using namespace std;

int n,m;
long long zb[1100][3],cs[30][4],A=0,B=0,vim=0;
char str[1100][2];

void flag(long long (*zb)[3],char (*str)[2],long long *cs);

int main(){
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		cin>>zb[i][0]>>zb[i][1]>>str[i][0];
	}
	for(int i = 0; i < m; i++){
		A=0;
		B=0;
		cin>>cs[i][0]>>cs[i][1]>>cs[i][2];
		flag(zb,str,cs[i]);
	}
}

void flag(long long (*zb)[3],char (*str)[2],long long *cs){
	for(int i = 0; i < n; i++){
		if((*cs+(*(cs+1) * *(*(zb+i)))+(*(cs+2) * *(*(zb+i)+1)))>0){
			vim=1;
		}else{
			vim=2;
		}
		if(A==0){
			if(*(*(str+i)) == 'A'){
				A=vim;
				B=abs(vim-3);
			}else{
				B=vim;
				A=abs(vim-3);
			}
		}else{
			if(*(*(str+i)) == 'A'){
				if(A!=vim){
					printf("No\n");
					return ;
				}
			}else{
				if(B!=vim){
					printf("No\n");
					return ;
				}
			}
		}
	}
	printf("Yes\n");
}
