#include<stdio.h>

int main(){
	int k,i,l,m,n,p,q;
	scanf("%d",&k);
	char ch[k][5],p1[7][5],p2[7][5],p3[7][5],p4[7][5];
//	ÊäÈëk¸öÊı×Ö 
	for(i=0;i<k;i++){
	scanf("%s",ch[i]);
    }
    for(i=0;i<k;i++){
    	for(q=0;q<7;q++){
    		for(p=0;p<5;p++){
    			p1[q][p]='*';p2[q][p]='*';p3[q][p]='*';p4[q][p]='*';
			}
		}
		printf("%s:\n",ch[i]);
		for(l=0;ch[i][l]!='\0';l++){
			switch (ch[i][l]){
				case '0':{
			    	for(m=1;m<6;m++){
			    		for(n=1;n<4;n++){
			    			if(l==0)
							p1[m][n]=' ';
						    else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
			    		}
		      		}break;}
		      	case '1':{
				    for(m=0;m<7;m++){
			    		for(n=0;n<4;n++){
			    			if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';	
	     		        }
	        	    }break;}
				case '2':{
                    for(m=1;m<3;m++){
                    	for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
                    	for(n=1;n<5;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;}
				case '3':{
				    for(m=1;m<3;m++){
                    	for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
                    	for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
						    p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;}
				case '4':{
				    for(m=0;m<3;m++){
				    	for(n=1;n<4;n++){
				    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<7;m++){
                    	for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;}
				case '5':{
				    for(m=1;m<3;m++){
                    	for(n=1;n<5;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
                    	for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;}
				case '6':{
					for(m=1;m<3;m++){
						for(n=1;n<5;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
                    	for(n=1;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;
				}
				case '7':{
					for(m=1;m<7;m++){
						for(n=0;n<4;n++){
							if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;
				}
				case '8':{
					for(m=1;m<3;m++){
						for(n=1;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
						for(n=1;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;
				}
				case '9':{
					for(m=1;m<3;m++){
						for(n=1;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}
					for(m=4;m<6;m++){
						for(n=0;n<4;n++){
                    		if(l==0)
							p1[m][n]=' ';
							else if(l==1)
							p2[m][n]=' ';
							else if(l==2)
							p3[m][n]=' ';
							else if(l==3)
							p4[m][n]=' ';
						}
					}break;
				}
				default: break;				
		    }
	    }
	    switch(l){
	    	case 1: {
	    		for(m=0;m<7;m++){
	    			for(n=0;n<5;n++){
	    				printf("%c",p1[m][n]);
					}
					printf("\n");
				}
				break;
			}
			case 2:{
				for(m=0;m<7;m++){
	    			for(n=0;n<5;n++){
	    				printf("%c",p1[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
	    				printf("%c",p2[m][n]);
					}
					printf("\n");
				}
				break;
			}
			case 3:{
				for(m=0;m<7;m++){
	    			for(n=0;n<5;n++){
	    				printf("%c",p1[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
	    				printf("%c",p2[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
						printf("%c",p3[m][n]);
					}
					printf("\n");
				}
				break;
			}
			case 4:{
				for(m=0;m<7;m++){
	    			for(n=0;n<5;n++){
	    				printf("%c",p1[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
	    				printf("%c",p2[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
						printf("%c",p3[m][n]);
					}
					printf("  ");
					for(n=0;n<5;n++){
						printf("%c",p4[m][n]);
					}
					printf("\n");
				}
				break;
			}
		}
	}
	return 0;
}
