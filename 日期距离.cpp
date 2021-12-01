#include<stdio.h>
#include<stdbool.h>

bool run(int year){
	year+=2000;
    if((year%4==0&&year%100!=0)||year%400==0)
 	return true;
	else return false;
}//判断是否为闰年 

int add(int month,int year){
	int ad;
	switch(month){
	    case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
			ad=31;return ad;}
		case 4: case 6: case 9: case 11:{
			ad=30;return ad;
		}
		case 2:{
			if(run(year)){
			ad=29;return ad;
			}else{
			ad=28;return ad;
			}
		}
	}	
}//给出每个月有多少天； 

bool da(int day,int month,int year){
	switch(month){
	    case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
			if(day>0&&day<32) return true;
			else return false;}
		case 4: case 6: case 9: case 11:{
			if(day>0&&day<31) return true;
			else return false;
		}
		case 2:{
			if(run(year)){
				if(day>0&&day<30) return true;
			    else return false;
			}else{
				if(day>0&&day<29) return true;
			    else return false;
			}
		}
		default: return false;	
    }
}//看是否满足要求 

void mon(int month){
	switch(month){
		case 1:{printf("January ");
			break;
		}
		case 2:{printf("February ");
			break;
		}
		case 3:{printf("March ");
			break;
		}
		case 4:{printf("April ");
			break;
		}
		case 5:{printf("May ");
			break;
		}
		case 6:{printf("June ");
			break;
		}
		case 7:{printf("July ");
			break;
		}
		case 8:{printf("August ");
			break;
		}
		case 9:{printf("September ");
			break;
		}
		case 10:{printf("October ");
			break;
		}
		case 11:{printf("November ");
			break;
		}
		case 12:{printf("December ");
			break;
		}
	}
}
	
int main(){
	int a,b,c,d,cha=0;
	scanf("%d/%d/%d",&a,&b,&c);
	if(a==b&&b==c){
    	mon(a);
			if(c/10==0){
				printf("%d, 200%d",b,c);
			}else
			printf("%d, 20%d",b,c);}
		else if(da(b,a,c)){
		if(!da(c,b,a)){
			mon(a);
			if(c/10==0){
				printf("%d, 200%d",b,c);
			}else
			printf("%d, 20%d",b,c);
		}else{
			if(a>c){
			for(d=c;d<a;d++){
				if(run(d)){
					cha+=366;
				}else cha+=365;
			}
			for(d=a;d<=12;d++){
				cha+=add(d,c);
			}cha-=b;
			for(d=1;d<b;d++){
				cha+=add(d,a);
			}cha+=c;
			}else if(a<c){
			for(d=a+1;d<c;d++){
				if(run(d)){
					cha+=366;
				}else cha+=365;
			}
			for(d=b;d<=12;d++){
				cha+=add(d,a);
			}cha-=c;
			for(d=1;d<a;d++){
				cha+=add(d,c);
			}cha+=b;		
			}else{
				if(a>b){
					for(d=b;d<a;d++){
				cha+=add(d,a);
			}cha=cha-c+b;
				}else if(a<b){
					for(d=a;d<b;d++){
				cha+=add(d,a);
			}cha=cha+c-b;
				}else{
					if(b>=c){
						cha=cha+(b-c);
					}else cha=cha+(c-b);
				}
			}
			
			
			printf("%d",cha);
		}
	}else{
		mon(b);
		if(a/10==0){
			printf("%d, 200%d",c,a);
		}else
		printf("%d, 20%d",c,a);
	}
	return 0;
}
