#include<stdio.h>
#include<math.h>
char ch[1000]={"*****    ************   **************************"
                  "*   *    *    *    **   **    *        **   **   *"
			      "*   *    *    *    **   **    *        **   **   *"
			      "*   *    **************************    ***********"
			      "*   *    **        *    *    **   *    **   *    *"
			      "*   *    **        *    *    **   *    **   *    *"
			      "*****    ***********    ***********    ***********"};
int main(){
	int n,i,b,l,m,j,sum;
	scanf("%d",&n);
	int a[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(i=0;i<n;i++){  //��Ӧn������ 
	    printf("%d:\n",c[i]);
		for(l=0;l<7;l++){  //���ÿ�� 
		    if(c[i]/1000>0){ 
			    a[i]=c[i]; 
			    sum=4;  //�ж��Ǽ�λ�� 
		    	for(j=0;j<4;j++){  //��ÿλ��������� 
			        b=pow(10,--sum);
					b=a[i]/b;
			        for(m=5*b+l*50;m<5*b+5+l*50;m++){
			    	    printf("%c",ch[m]);
				    }printf("  ");
					b=pow(10,sum);
				    a[i]=a[i]%b;
			    }
			    printf("\n");
		    }else if(c[i]/100>0){
		    	a[i]=c[i];
		    	sum=3;  //�ж��Ǽ�λ��
		    	for(j=0;j<3;j++){  //��ÿλ��������� 
			        b=pow(10,--sum);
				    b=a[i]/b;
			        for(m=5*b+l*50;m<5*b+5+l*50;m++){
			    	    printf("%c",ch[m]);
				    }printf("  ");
					b=pow(10,sum);
				    a[i]=a[i]%b;
			    }
			    printf("\n");
			}else if(c[i]/10>0){
				a[i]=c[i];
				sum=2;  //�ж��Ǽ�λ��
		    	for(j=0;j<2;j++){  //��ÿλ��������� 
			        b=pow(10,--sum);
					b=a[i]/b;
			        for(m=5*b+l*50;m<5*b+5+l*50;m++){
			    	    printf("%c",ch[m]);
				    }printf("  ");
					b=pow(10,sum);
				    a[i]=a[i]%b;
			    }
			    printf("\n");
			}else{
				a[i]=c[i];
				b=a[i];
			    for(m=5*b+l*50;m<5*b+5+l*50;m++){
			   	    printf("%c",ch[m]);
				   }
				printf("\n");
			}
	    } 
	}
	return 0;
}			 
