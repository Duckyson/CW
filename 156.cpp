#include<stdio.h>
int normal(int a[]);   //这个是判断这种情况存在还是不存在
void print(int a[]);   //这个是输出函数
int add_day(int a[]);  //这个是计算天数
int runnian(int e);    //判断e是否是闰年  注意此处的年是只有后两位  e是两位数字
int everymonth(int n);   //计算n月的次数


int main(void) {
	int a = 0, b = 0, c = 0;
	scanf("%d/%d/%d", &a, &b, &c);
	int case1[3]={a,b,c}, case2[3]={c,a,b};
	int a1 = normal(case1), a2 = normal(case2);
//	printf("1*%d  *%d",a1,a2);


	if (a1 & a2) {
		int b1 = add_day(case1);
		int b2 = add_day(case2);
		int sub = b1 - b2;
		if (sub > 0) printf("%d", sub);
		else printf("%d", -sub);
	}


	else {
		if (a1) {
			print(case1);
		}
		else print(case2);
	}
}

int normal(int a[]) {
	if (a[1] > 12) {
    //printf("no");
	return 0;
	}
	else {
		int m=a[1];
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			if(a[2]>31) return 0;
			else return 1;
		}
		else if(m==2){
			if(runnian(a[0])){
				if(a[2]>29) return 0;
				else return 1;
			}
			else if(a[2]>28)  return 0;
			else return 1;
		}
		else if(m==4||m==6||m==9||m==11){
			if(a[2]>30) return 0;
			else return 1;
			
		}
	

		}
	}


void print(int a[]) {
	switch (a[1]) {
	case 1:printf("January"); break;
	case 2:printf("February"); break;
	case 3:printf("March"); break;
	case 4:printf("April"); break;
	case 5:printf("May"); break;
	case 6:printf("June"); break;
	case 7:printf("July"); break;
	case 8:printf("August"); break;
	case 9:printf("September"); break;
	case 10:printf("October"); break;
	case 11:printf("November"); break;
	case 12:printf("December"); break;
	}printf(" %d 20%d", a[2], a[0]);
}



int add_day(int a[]) {
	int add = 0,one[100];
	for (int i = 0; i < a[0] - 1; i++) {
		if (runnian(i)) one[i] = 366;
		else one[i] = 365;
		add += one[i];
	}
	one[a[0]]=0;
	for (int i = 0; i < a[1] - 1; i++) {   //计算最后一年的最后一个月前的天数
		one[a[0]] += everymonth(i);
	}
	one[a[0]] += a[2];
	add += one[a[0]];
	return add;
}


int runnian(int e) {
	e += 2000;
	if ((e % 400 == 0) || (e % 4 == 0 && e % 100 != 0)) return 1;
	else return 0;
}

int everymonth(int n) {
	switch (n) {
	 case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
		return 31;
	}
	case 2: {
		if (runnian) return 29;
		else  return 28;
	}
		case 4:case 6:case 9:case 11: {
		return 30;
		}
	}
}

