#include<stdio.h>
#include<stdlib.h> 
int* memLeak(int memory1, int memory2, int* returnSize){
     int l=1;
     for(int i=1;;i++){
         if(memory1>=memory2){
             if(memory1>=i){
                 memory1-=i;
                 l+=1;
             }else{
                 break;
             }
         }else{
             if(memory2>=i){
                 memory2-=i;
                 l+=1;
             }else{
                 break;
             }
         }
         
     }
     returnSize[0]=l;returnSize[1]=memory1;returnSize[2]=memory2;
     return returnSize;
}
int main(){
	int m1,m2;
	scanf("%d %d",&m1,&m2);
	int l[3];
	memLeak(m1,m2,l);
	printf("%d,%d,%d",l[0],l[1],l[2]);
	return 0;
}
