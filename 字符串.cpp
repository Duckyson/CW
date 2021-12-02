#include<stdio.h>

int main(){
	char ch[110][3];
	int i,l,t=1;int a[100];
	for(i=0;;i++){
	ch[i][0]=getchar();
kai:	if(ch[i][0]==EOF) break;
        a[i]=0;
		if(ch[i][0]=='\\'){
			ch[i][1]=getchar();
			switch (ch[i][1]){
				case 'a' : ch[i][0]=7;  break;
				case 'b' : ch[i][0]=8;  break;
				case 't' : ch[i][0]=9;  break;
				case 'n' : ch[i][0]=10; break;
			    case 'v' : ch[i][0]=11; break;
			    case 'f' : ch[i][0]=12; break;
			    case 'r' : ch[i][0]=13; break;
			    case '0' : ch[i][0]=14; break; 
			    case '?' : ch[i][0]=63; break;
			    case '"' : ch[i][0]=34; break;
			    case '\'': ch[i][0]=39; break;
				case '\\': ch[i][0]=92; break; 
			    case 'x' : {ch[i][0]=getchar();ch[i][1]=getchar();
					break;
			    }
			    default : {
			    	ch[i][0]=ch[i][1];a[i]=a[i]*8+ch[i][0]-'0';ch[i][0]='m';
					ch[i][1]=getchar();
			    	if(ch[i][1]<=48||ch[i][1]>=57){
			    		i++;
			    		ch[i][0]=ch[i-1][1];
			    		goto kai;
					}a[i]=a[i]*8+ch[i][1]-'0';ch[i][1]='m';
					ch[i][2]=getchar();
					if(ch[i][2]<=48||ch[i][2]>=57){
			    		i++;
			    		ch[i][0]=ch[i-1][2];
			    		goto kai;}a[i]=a[i]*8+ch[i][2]-'0';ch[i][2]='m';
					break;
				}
				}
			}
		}

		
	
	for(l=0;l<i-1;l++){
		if((ch[l][1]>=48&&ch[l][1]<=57)||(ch[l][1]>=65&&ch[l][1]<=70)||(ch[l][1]>=97)&&(ch[l][1]<=102)){
			if(ch[l][1]>=97&&ch[l][1]<=102) ch[l][1]-=32;
			printf("%c%c ",ch[l][0],ch[l][1]);
		}else{if(a[l]==0){
		a[l]=ch[l][0];}
		if(a[l]<=15){
			printf("0%X ",a[l]);
		}else
		printf("%X ",a[l]);
	}}
	return 0;
}
