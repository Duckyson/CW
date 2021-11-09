#include<stdio.h>
int main(){
	int n,a=0,i=0,l=0;
	scanf("%d",&n);
	getchar();
	char str[n][1000];
    for(a=0;a<n;a++){
    	scanf("%s",&str[a]);
	}
	for(i=0;i<n;){
		for(l=0;str[i][l]!='\0';l++){
			if(str[i][0]!='A'&&str[i][0]!='S'){
			printf("NO\n");
			goto end;
			}
			while(str[i][l]=='A'){
				l++;
				if(str[i][l]!='A'&&str[i][l]!='S'){
				    printf("NO\n");
				    goto end;}
				else continue;    
			}
			if(str[i][l]=='S'&&str[i][l+1]=='C'&&str[i][l+2]=='U'){
			    	l+=3;
				}
				else {
				printf("NO\n");
				goto end;}
				if(str[i][l]=='\0'){
					printf("YES\n");
					goto end;
				}
			while(str[i][l]=='A'){
				l++;	
			if(str[i][l]=='A'||str[i][l]=='\0')
			    continue;
			else {
			    printf("NO\n");
			    goto end;}
		    }
		}
		printf("YES\n");
end:    i++;				
	}
    return 0; 	
}
