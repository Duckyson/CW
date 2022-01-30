#include<stdio.h>
int main(){
	char str[3000][26]={0},ch;
	int a=11,b=21,l=0,i=0,j=0;
	int zuo1=0,you1=0,zuo2=0,you2=0;
	int defen[5000]={0};
	for(i=0;i<3000;i++){
		for(l=0;l<25;l++){
			scanf("%c",&ch);
			if(ch!='\n') str[i][l]=ch;     //输入 
			if(str[i][l]=='E') break;   //如果是E就退出
			else if(str[i][l]=='W'){
				zuo1+=1;
				zuo2+=1;
				if(zuo1==a&&(zuo1-you1)>1){
					printf("%d:%d\n",zuo1,you1);
					zuo1=you1=0;
					a=11;
				}else if(zuo1==a&&(zuo1-you1)==1){
					a+=1;
				}
				if(zuo2==b&&(zuo2-you2)>1){
					defen[j]=zuo2;
					defen[j+1]=you2;
					zuo2=you2=0;
					j+=2;
					b=21;
				}else if(zuo2==b&&(zuo2-you2)==1){
					b+=1;
				}
			}else if(str[i][l]=='L'){
				you1+=1;
				you2+=1;
				if(you1==a&&(you1-zuo1)>1){
					printf("%d:%d\n",zuo1,you1);
					zuo1=you1=0;
					a=11;
				}else if(you1==a&&(you1-zuo1)==1){
					a+=1;
				}
				if(you2==b&&(you2-zuo2)>1){
					defen[j]=zuo2;
					defen[j+1]=you2;
					b=21;
					zuo2=you2=0;
					j+=2;
				}else if(you2==b&&(you2-zuo2)==1){
					b+=1;
				}
			} 
		}
		if(str[i][l]=='E') break;
	}
	printf("%d:%d\n",zuo1,you1);
	if(j>0){
		for(int k=0;k<j;k+=2){
			printf("\n%d:%d",defen[k],defen[k+1]);
		}
	}
	printf("\n%d:%d",zuo2,you2);
	return 0;
} 
