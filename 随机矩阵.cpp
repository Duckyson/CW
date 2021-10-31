#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 4
#define M 100
int main(){
	const char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char b[10][10];
	int i,l;
	int n,m=0;
	int shu;
	bool s1=true,s2=true,s3=true,s4=true;
	
	srand((unsigned) time(NULL));
	
	for(i=0;i<10;i++){
		for(l=0;l<10;l++){
			b[i][l]='.';
		}
	}
	n=rand() % M;
	l=n%10;i=n/10;
	b[i][l]=a[m];
	for(m=1;m<26;){
		shu=rand() % N;
		if(s1==false&&s2==false&&s3==false&&s4==false){
			goto end;}
	    else switch(shu){
	    	case 0:s1=true;
			if(i==0){
				s1=false;
	    	    break;}
	    	else if(b[i-1][l]=='.'){
			    i--;
			    b[i][l]=a[m];
			    m++;s1=true,s2=true,s3=true,s4=true;}
			else {
				s1=false;
	            break;}
	            break;
			case 1:s2=true;
			if(l==0){
				s2=false;
				break;}
			else if(b[i][l-1]=='.'){
				l--;
				b[i][l]=a[m];
				m++;s1=true,s2=true,s3=true,s4=true;}
			else {
				s2=false;
			    break;}
				break;
			case 2:s3=true;
			if(i==9){
				s3=false;
			    break;}
			else if(b[i+1][l]=='.'){
				i++;
				b[i][l]=a[m];
			    m++;s1=true,s2=true,s3=true,s4=true;}
			else {
				s3=false;
			    break;}
			    break;
			case 3:s4=true;
			if(l==9){
				s4=false;
			    break;}
			else if(b[i][l+1]=='.'){
				l++;
				b[i][l]=a[m];
			    m++;s1=true,s2=true,s3=true,s4=true;}
			else {
			    s4=false;
				break;}
				break;									
		}
	}
end:	
	for(i=0;i<10;i++){
		for(l=0;l<10;l++){
			printf("%c",b[i][l]);
		}
		printf("\n");
	}
	return 0;
}
