#include<stdio.h>
#include<string.h>
int main (){
	int n,i,l,p,m=0,q=1,j,k,x;
	char ch[20],ar[23];
	scanf("%d ",&n);
	scanf("%s",ch);
	int xu[n],rank[n];
	rank[0]=1;
	char name[n][11],id[n][19],grade[n][15],grade1[n][20];
	for(i=0;i<n;i++){
		getchar();
	scanf("%s %s %s",name[i],id[i],grade[i]);
	strcpy(grade1[i],grade[i]);
	}
	for(i=0;i<n;i++){
		for(m=0,l=0;l<3;l++){
			if(grade[i][l]>=48&&grade[i][l]<=57){
				m++;
			}
		}
		if(m==1){
				grade[i][2]=grade[i][0];
				grade[i][1]='0';
				grade[i][0]='0';
			}
		if(m==2){
				grade[i][2]=grade[i][1];
				grade[i][1]=grade[i][0];
				grade[i][0]='0';
			}
		if(m==0){
			    grade[i][0]='/';
		}	
    }
	for(i=0;i<n;i++){
		xu[i]=i;
	}    
    for(l=0;l<n-1;l++){
    	for(i=n-1;i>l;i--){
    		if(strcmp(grade[i],grade[i-1])>0){
    			strcpy(ar,grade[i]);
    			strcpy(grade[i],grade[i-1]);
    			strcpy(grade[i-1],ar);
				p=xu[i];
				xu[i]=xu[i-1];
				xu[i-1]=p;    			
			}
		}
	}
	for(i=0;i<n;i++){
		grade[i][3]='\0';
	}
	for(i=0;i<n-1;i++){
		if(strcmp(grade[i],grade[i+1])>0){
			rank[i+1]=q+1;q++;
		}
		if(strcmp(grade[i],grade[i+1])==0){
			rank[i+1]=rank[i];q++;
		}
	}
	for(i=0;i<n;i++){
		if(grade[i][0]=='/'){
			grade[i][0]='n';
		}
	}
	for(i=0;i<n;){
        for(l=0;name[i][l]!='\0';l++){
begin:      if(name[i][l]=='0') goto next;  	
			if(name[i][l]==ch[0]){
        		for(j=1;j<strlen(ch);j++){
        			if(name[i][l+j]==ch[j]){
        				continue;
					}
					else l++;
					goto begin;
				}for(x=0;x<n;x++){
					if(xu[x]==i){
						k=x;
						break;
					}else continue;
				}if(grade1[i][0]!='n'){
				printf("%s %s %s %d\n",name[i],id[i],grade1[i],rank[k]);}else 
				printf("%s %s %s %s\n",name[i],id[i],grade1[i],grade1[i]);
				 goto end;
			}else continue;
		}
next:	
    	for(l=0;id[i][l]!='\0';l++){
begin1:     if(id[i][l]=='\0') goto next1;
    		if(id[i][l]==ch[0]){
         		for(j=1;j<strlen(ch);j++){
            		if(id[i][l+j]==ch[j]){
        	    		continue;
		    		}
		    		else l++;
					goto begin1;				
	     		}for(x=0;x<n;x++){
					if(xu[x]==i){
						k=x;
						break;
					}else continue;
				}if(grade1[i][0]!='n'){
	    		printf("%s %s %s %d\n",name[i],id[i],grade1[i],rank[k]);} else
				printf("%s %s %s %s\n",name[i],id[i],grade1[i],grade1[i]);
				goto end;
	    	}else continue;	
    	}
next1:  
        for(l=0;l<3;l++){
        	if(grade1[i][l]==ch[l])
        	continue;
        	else goto end;
		}for(x=0;x<n;x++){
					if(xu[x]==i){
						k=x;
						break;
					}else continue;
				}if(grade1[i][0]!='n'){
		printf("%s %s %s %d\n",name[i],id[i],grade1[i],rank[k]);}else
		printf("%s %s %s %s\n",name[i],id[i],grade1[i],grade1[i]);	
end:    i++;
    } 
    return 0;
}
