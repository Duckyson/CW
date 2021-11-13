#include<stdio.h>
#include<string.h>
int main(){
	int n,i,l,m=0,o,p,q,j;
	scanf("%d",&n);
	char name[n][11],id[n][19],grade[n][7],ch[8];
	int xu[n];
	for(i=0;i<n;i++){
		getchar();
	scanf("%s %s %s",name[i],id[i],grade[i]);
	}
	
	for(i=0;i<n;){
		for(m=0,l=0;l<3;l++){
			if(grade[i][l]>=48&&grade[i][l]<=57){
				m++;
			}
		}
		if(m==1){
				grade[i][2]=grade[i][0];
				grade[i][1]='0';
				grade[i][0]='0';
				i++;
			}
		if(m==2){
				grade[i][2]=grade[i][1];
				grade[i][1]=grade[i][0];
				grade[i][0]='0';
				i++;
			}
		if(m==3){
			i++;
		}	
		if(m==0){
			j=i;
			if(j<n-1){
				for(;j<n-1;j++){
					strcpy(grade[j],grade[j+1]);
					strcpy(name[j],name[j+1]);
					strcpy(id[j],id[j+1]);
				}n=n-1;
			}
			else if(j==n-1){
				n=n-1;
			}
		}
	}
	for(i=0;i<n;i++){
		xu[i]=i;
	}		
	for(i=0;i<n-1;i++){
		
			if(strcmp(grade[i],grade[i+1])>0){
				strcpy(ch,grade[i]);
				strcpy(grade[i],grade[i+1]);
				strcpy(grade[i+1],ch);
				p=xu[i];
				xu[i]=xu[i+1];
				xu[i+1]=p;
			}
			if(strcmp(grade[i],grade[i+1])==0){
				if(strcmp(name[i],name[i+1])<0){
				strcpy(ch,grade[i]);
				strcpy(grade[i],grade[i+1]);
				strcpy(grade[i+1],ch);
				p=xu[i];
				xu[i]=xu[i+1];
				xu[i+1]=p;
				}
			}
	}
	for(i=n-2;i>0;i--){

			if(strcmp(grade[i],grade[i-1])<0){
				strcpy(ch,grade[i]);
				strcpy(grade[i],grade[i-1]);
				strcpy(grade[i-1],ch);
				p=xu[i];
				xu[i]=xu[i-1];
				xu[i-1]=p;
			}
			if(strcmp(grade[i],grade[i-1])==0){
				if(strcmp(name[i],name[i-1])>0){
				strcpy(ch,grade[i]);
				strcpy(grade[i],grade[i-1]);
				strcpy(grade[i-1],ch);
				p=xu[i];
				xu[i]=xu[i-1];
				xu[i-1]=p;
	}}}
	o=xu[0];q=xu[n-1];
	printf("%s %s\n",name[q],id[q]);
	printf("%s %s",name[o],id[o]);
	return 0;
}
