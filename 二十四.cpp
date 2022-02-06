#include<bits/stdc++.h>
using namespace std;

int a[110][5],j=3,k=4;
char b[110][4];

void jisuan(char *a,int *b);

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%c%d%c%d%c%d",&a[i][0],&b[i][0],&a[i][1],&b[i][1],&a[i][2],&b[i][2],&a[i][3]);
		jisuan(b[i],a[i]);
	}
}

void jisuan(char *a,int *b){
	j=3;
	int sum=0;
	for(int i=0;i<j;i++){
		if(*(a+i)=='x'){
			*(b+i) *= *(b+i+1);
			j--;
			for(int l=i;l<j;l++){
				b[l+1]=b[l+2];
				a[l]=a[l+1];
			}
			i--;
		}else if(*(a+i)=='/'){
			*(b+i) /= *(b+i+1);
			j--;
			for(int l=i;l<j;l++){
				b[l+1]=b[l+2];
				a[l]=a[l+1];
			}
			i--;
		}
	}
	sum=*(b);
	for(int i=0;i<j;i++){
		if(*(a+i)=='+'){
			sum += *(b+i+1);
		}else{
			sum -= *(b+i+1);
		}
	}
	if(sum==24) printf("Yes\n");
	else printf("No\n");
}
