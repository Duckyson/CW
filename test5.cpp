 //输入n，和待查找串 
//建立数组name,xuehao,score是个二维数组第一列是成绩第二列与每个绑死的数字一样,将每个人与一个数字绑死， 
//然后排score第一列的顺序并且第二列跟着第一列一起移动
//最后输出的时候就用for循环判断用绑死的数和每个人一一对应


/*结构写法：name,xuehao,score,i  (特殊情况先不予考虑) */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define b 100
struct test{
	char name[10];
	char xuehao[19];
	char score[3];
	int score_1;
	int rank;
} one[b];

void print(struct test one[],int i);
int shuzu_max(int a[],int n);

int main(void){
	int n;
	char order[19];
	scanf("%d%s",&n,order);
	int  nopaixu_score[n];
	
	for(int i=0;i<n;i++){             //成绩输入 
		scanf("%s%s%s",one[i].name,one[i].xuehao,one[i].score);
		nopaixu_score[i]=one[i].score_1=atoi(one[i].score);
		if(one[i].score_1==0)
		{
		one[i].rank=-1;
		one[i].score_1=-1;
		}
		else one[i].rank=1; 
	}
	int rank_1=1;
	for(;rank_1<n;rank_1++){
		int q=-1;
		for(int d=0;d<n;d++){
			if(one[d].score_1==shuzu_max(nopaixu_score,n)){
				one[d].rank=rank_1;
				q++;                      //q的作用是来判断有几个人是这个成绩 
			}
			if(nopaixu_score[d]==shuzu_max(nopaixu_score,n)){
				nopaixu_score[d]=0; 
			}
		}
		rank_1+=q; 
	}
	
	
	for(int i=0;i<n;i++){
		if(strcmp(order,one[i].name)==0)
		print(one,i);
	}
	
	for(int i=0;i<n;i++){
		if(strcmp(order,one[i].xuehao)==0)
		print(one,i);
	}
	
	for(int i=0;i<n;i++){
		if(strcmp(order,one[i].score)==0)
		print(one,i);
	}
	
	return 0;
} 


void print(struct test one[],int i){
	printf("%s %s ",one[i].name,one[i].xuehao);
	if(one[i].rank>0) printf("%d %d",one[i].score_1,one[i].rank);
	else printf("n/a n/a");

}


int shuzu_max(int a[],int n){                 //找出数组的最大值 
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	
	return max; 
}