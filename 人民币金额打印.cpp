#include<stdio.h>
#include<string.h>
void inter(char ch){
	if(ch=='0')  printf("��");
	else if(ch=='1')  printf("Ҽ");
	else if(ch=='2')  printf("��");
	else if(ch=='3')  printf("��");
	else if(ch=='4')  printf("��");
	else if(ch=='5')  printf("��");
	else if(ch=='6')  printf("½");
	else if(ch=='7')  printf("��");
	else if(ch=='8')  printf("��");
	else if(ch=='9')  printf("��");
	else return; 
}
int main(){
	int m,i,l;
	scanf("%d",&m);
	char a[m][9];
	int b[m]; 
	for(i=0;i<m;i++){
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
		if(a[i][0]=='-'){
			b[i]-=1; 
		}
	}
	for(i=0;i<m;i++){
		l=0;
		if(a[i][0]=='-')  {
		printf("��");
		l+=1;}
		switch(b[i]){
			case 1:{
				inter(a[i][l]);
				printf("Բ\n"); 
				break;
			}
			case 2:{
				inter(a[i][l]);
				printf("ʰ");
				if(a[i][l+1]!='0'){
					inter(a[i][l+1]);
				}
				printf("Բ\n"); 
				break;	
			}
			case 3:{
				inter(a[i][l]);
				printf("��");
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+1]);
				if(a[i][l+1]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+2]!='0'){
					inter(a[i][l+2]);
				}
				printf("Բ\n");
				break;
			}
			case 4:{
				inter(a[i][l]);
				printf("Ǫ");
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'&&a[i][l+3]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+1]);
				if(a[i][l+1]!='0'){
					printf("��");
				}
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){goto e2;}
				inter(a[i][l+2]);
e2:				if(a[i][l+2]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+3]!='0'){
					inter(a[i][l+3]);
				}
				printf("Բ\n");
				break;
			}
			case 5:{
				inter(a[i][l]);
				printf("��");
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+1]);
				if(a[i][l+1]!='0'){
					printf("Ǫ");
				}
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){goto d1;}
				inter(a[i][l+2]);
d1:				if(a[i][l+2]!='0'){
					printf("��"); 
				}
				if(a[i][l+3]=='0'&&a[i][l+4]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){goto d2;}
				inter(a[i][l+3]);
d2:				if(a[i][l+3]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+4]!='0'){
					inter(a[i][l+4]);
				}
				printf("Բ\n");
				break;
			}
			case 6:{
				inter(a[i][l]);
				printf("ʰ");
				if(a[i][l+1]!='0'){
					inter(a[i][l+1]);
				}
				printf("��");
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+2]);
				if(a[i][l+2]!='0'){
					printf("Ǫ");
				}
				if(a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'){goto a1;}
				inter(a[i][l+3]);
a1:				if(a[i][l+3]!='0'){
					printf("��");
				}if(a[i][l+4]=='0'&&a[i][l+5]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+3]=='0'&&a[i][l+4]=='0'){goto a2;}
				inter(a[i][l+4]);
a2:				if(a[i][l+4]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+5]!='0'){
					inter(a[i][l+5]);
				}
				printf("Բ\n");
				break;
			}
			case 7:{
				inter(a[i][l]);
				printf("��");
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'){
					printf("��Բ\n");break; 
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){
					printf("��"); goto b1;
				}
				inter(a[i][l+1]);
				if(a[i][l+1]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+2]!='0'){
					inter(a[i][l+2]);
				}
				printf("��");
b1:				if(a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+3]);
				if(a[i][l+3]!='0'){
					printf("Ǫ");
		     	}
		     	if(a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+3]=='0'&&a[i][l+4]=='0'){goto b3;}
				inter(a[i][l+4]);
b3:				if(a[i][l+4]!='0'){
					printf("��");
				}
				if(a[i][l+5]=='0'&&a[i][l+6]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+4]=='0'&&a[i][l+5]=='0'){goto b2;}
				inter(a[i][l+5]);
b2:				if(a[i][l+5]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+6]!='0'){
					inter(a[i][l+6]);
				}
				printf("Բ\n");
				break;
			}
			case 8:{
				inter(a[i][l]);
				printf("Ǫ");
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'&&a[i][l+7]=='0'){
					printf("��Բ\n");break; 
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'&&a[i][l+3]=='0'){
					printf("��");goto c1; 
				}
				inter(a[i][l+1]);
				if(a[i][l+1]!='0'){
					printf("��"); 
				}
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'&&a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'&&a[i][l+7]=='0'){
					printf("��Բ\n");break; 
				}
				if(a[i][l+2]=='0'&&a[i][l+3]=='0'){
					printf("��"); goto c1;
				}
				if(a[i][l+1]=='0'&&a[i][l+2]=='0'){goto c3;}
				inter(a[i][l+2]);
c3:				if(a[i][l+2]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+3]!='0'){
					inter(a[i][l+3]);
				}
				printf("��");
c1:				if(a[i][l+4]=='0'&&a[i][l+5]=='0'&&a[i][l+6]=='0'&&a[i][l+7]=='0'){
					printf("Բ\n");break; 
				}
				inter(a[i][l+4]);
				if(a[i][l+4]!='0'){
					printf("Ǫ");
		     	}
		     	if(a[i][l+5]=='0'&&a[i][l+6]=='0'&&a[i][l+7]=='0'){
					printf("Բ\n");break; 
				}if(a[i][l+4]=='0'&&a[i][l+5]=='0'){goto c2;}
				inter(a[i][l+5]);
c2:				if(a[i][l+5]!='0'){
					printf("��");
				}
				if(a[i][l+6]=='0'&&a[i][l+7]=='0'){
					printf("Բ\n");break; 
				}
				if(a[i][l+5]=='0'&&a[i][l+6]=='0'){goto c4;}
				inter(a[i][l+6]);
c4:				if(a[i][l+6]!='0'){
					printf("ʰ"); 
				}
				if(a[i][l+7]!='0'){
					inter(a[i][l+7]);
				}
				printf("Բ\n");
				break;
			} 
		}
	}
	return 0; 
}
