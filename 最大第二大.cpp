#include<stdio.h>
void find_two_largest(int a[],int n,int *largest,int *second_largest){
	int i;
	*largest=a[0];*second_largest=a[0];
	for(i=1;i<n;i++){
		if(a[i]>*largest){
			*largest=a[i];
		}
	}
	for(i=1;i<n;i++){
		if(a[i]>*second_largest&&a[i]<*largest){
			*second_largest=a[i];
		}
	}
}
int main(){
	int n,largest,second_largest;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	find_two_largest(a,n,&largest,&second_largest);
	printf("%d %d",largest,second_largest);
	return 0;
}
