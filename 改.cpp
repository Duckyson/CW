#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	int num,i=0,score[100],max=0,min=0;
	char name[100][12],xuehao[100][20],score_1[100][5];
	scanf("%d",&num);
	
	
	for(i=0;i<num;i++){
		scanf("%s %s %s",name[i],xuehao[i],score_1[i]);
		if(strcmp(score_1[i],"n/a")!=0){
		score[i]=atof(score_1[i]);
		}
		else score[i]=-1;
		if(strcmp(score_1[i],"n/a")!=0){
		
		if(score[i]>score[max]||score[i]==score[max]){
			if(score[i]>score[max])
			max=i;
		if(score[i]==score[max]){
			if(strcmp(name[i],name[max])<0) max=i;
		}
		}
		else max=max;
		
		if(score[i]>=0){
			if(score[min]==-1)  score[min]=score[i];
		if(score[i]<score[min]||score[i]==score[min]){
			if(score[i]<score[min])
			min=i;
		
		if(score[i]==score[min]){
			if(strcmp(name[i],name[min])>0) min=i;
	}
		}
		else min=min;
		}else continue;
		}
	}
	
	printf("%s %s\n",name[max],xuehao[max]);
	printf("%s %s\n",name[min],xuehao[min]);
	
	return 0;
} 



/*adou 1678 99
  lili 8897 100
  datou 78366 100*/
