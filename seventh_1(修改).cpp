//�����������ݺ󣬽����������飬���鶼��yy/mm/dd ��ʽ��ֻ�������������ַŵĵط���ͬ�����������ж��ǲ��Ƿ������
//���Ž�����ת���ɴ�00/00/00���������ע��ÿ���µ�������ͬ��Ȼ���ж����ǲ�������
//������������


#include<stdio.h>
#include<stdbool.h>
bool yes_style(int a[3]){
	if(a[1]==1||a[1]==3||a[1]==5||a[1]==7||a[1]==8||a[1]==10||a[1]==12){
		if(a[2]>=0&&a[2]<=31)	return 1;
	}else if(a[1]==2){
		a[0]+=2000;
	    if(a[0]%400==0||(a[0]%4==0&&a[0]%100!=0)){
	    	if(a[2]>=0&&a[2]<=29) {a[0]-=2000;
			return 1;} 
		}else if(a[2]>=0&&a[2]<=28) ;{a[0]-=2000;
			return 1;} 
	}else if(a[1]==4||a[1]==6||a[1]==9||a[1]==11){
		if(a[2]>=0&&a[2]<=30) return 1;
	}
	return 0;
}

void print_mm(int b){
	switch(b){
		case 1:printf("January ");break;
		case 2:printf("February ");break;
		case 3:printf("March ");break;
		case 4:printf("April ");break;
		case 5:printf("May ");break;
		case 6:printf("June ");break;
		case 7:printf("July ");break;
		case 8:printf("August ");break;
		case 9:printf("September ");break;
		case 10:printf("October ");break;
		case 11:printf("November ");break;
		case 12:printf("December ");break;
	}
}


int  add_day(int c[],int d[]){
	int add;add=0;      //�������addΪ������ 
	int i,j;
	for(i=2000,j=0;i-2000<d[0];i++,j++){
		if(i%400==0||(i%4==0&&i%100!=0))c[j]=366;
		else c[j]=365;//�������һ����ǰ��������� 
	}
	
	
	int mm_day[12];
	mm_day[0]=mm_day[2]=mm_day[4]=mm_day[6]=mm_day[7]=mm_day[9]=mm_day[11]=31;
	mm_day[3]=mm_day[5]=mm_day[8]=mm_day[10]=30;
	d[0]+=2000;
	if(d[0]%400==0||(d[0]%4==0&&d[0]%100!=0)) mm_day[1]=29;
	else mm_day[1]=28;
	c[d[0]-2000]=0;
	for(int k=0;k<d[1]-1;k++){
		c[d[0]-2000]+=mm_day[k];
	}c[d[0]-2000]+=d[2];//�������һ������� 
	
	for (int l=2000;l<d[0]+1;l++){
		add+=c[l-2000];//���������� 
	} 
	return add;
}




int main(void){
	int a,b,c;
	int x1,x2;
	scanf("%d/%d/%d",&a,&b,&c); 
	int style_1[3]={a,b,c},style_2[3]={c,a,b};
	
	x1=yes_style(style_1);
	x2=yes_style(style_2);
	if(a==b&&b==c){
		style_1[0]+=2000;
		print_mm(style_1[1]);
			printf("%d, ",style_1[2]);
			printf("%d",style_1[0]);
	}else{
	
	if((x1&&!x2)||(!x1&&x2)){          //��ifѭ�����ж�������һ���࣬�·�if����ִ�е�һ����� 
		if(x1){
			print_mm(style_1[1]);
			printf("%d, ",style_1[2]);
			printf("20%d",style_1[0]);
		}
		if(x2){
			print_mm(style_2[1]);
			printf("%d, ",style_2[2]);
			printf("20%d",style_2[0]);
		}                                
	}
	
	if(x1==1&&x2==1){
	
	int day_1[a],day_2[c],y1,y2;          //ִ�еڶ������ 
	y1=add_day(day_1,style_1);
	y2=add_day(day_2,style_2);
	
	int d=y1-y2;
	if(y1>y2)printf("%d",d);                   //�ó���ֵ��ʹ���Ϊ��ֵ 
	else printf("%d",-d);
	}
	}
	return 0;
} 
