#include<stdio.h>

bool canReorderDoubled(int* arr, int arrSize){
    int m=1;
    for(int i=0;i<arrSize;i++){
        if(arr[i]<0){
            arr[i]=0-arr[i];
        }
    }
    for(int i=0;i<arrSize-1;i++){
        for(int l=1;l<arrSize-i;l++){
            if(arr[i]>arr[l+i]){
                int n;
                n=arr[i];
                arr[i]=arr[l+i];
                arr[l+i]=n;
            }
        }
    }
    for(int i=0;i<arrSize/2;i++){
        m=1;
        for(int l=0;l<arrSize/2;l++){
            if(arr[l]*2!=arr[i+l+1]){
                m=0;
                break;
            }
        }
        if(m==1){
            return true;
        }
    }
    return false;
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(canReorderDoubled(a,n)){
		printf("true");
	}else{
		printf("false");
	}
	return 0;
}
