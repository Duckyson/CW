#include<stdio.h>
#include<string.h>
int main(){
	int i=0,n=0,a=0,b=0,m,l,size[1000],xu[1000];
	char str[10000],ch[1000][20],ch1[21];
//	输入文本 
	for(i=0;(str[i]=getchar())!=EOF;i++){
		n++;
	}
//  取出单词 	
        for(i=0;i<n;i++){
        	while((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
        		b=0;
            while((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
            	if(str[i]>=65&&str[i]<=90){
            		str[i]=str[i]+32;
				}
    	        ch[a][b]=str[i];
    		    b++;i++;
		    }a++;}
    }
//  计算每个单词出现的次数
    m=a;
    for(i=0;i<m;i++){
    	size[i]=1;
	}
    for(a=0;a<m;a++){
    	for(i=1;i<m-a;i++){
    		if(strcmp(ch[a],ch[a+i])==0){
    			size[a]=size[a]+1;
			}
		}
	}
//	比较出现次数大小并输出 
	for(i=0;i<m;i++){
		xu[i]=i;
	}
	for(a=0;a<m-1;a++){
		for(i=0;i<m-a-1;i++){
			if(size[i]>size[i+1]){
				l=size[i];
				size[i]=size[i+1];
				size[i+1]=l;
				l=xu[i];
				xu[i]=xu[i+1];
				xu[i+1]=l;
			}
		}
	}
	for(;;m--){
		if(size[m-1]==size[m-2]){
			a=xu[m-1];b=xu[m-2];
			if(strcmp(ch[a],ch[b])>0){
				strcpy(ch1,ch[a]);
				strcpy(ch[a],ch[b]);
				strcpy(ch[b],ch1);
			}
			else continue;
		}
		else break;
	}i=xu[m-1];
	printf("%s %d",ch[i],size[m-1]);
	return 0;
	
}
