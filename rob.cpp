#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int rob(int* nums, int numsSize){
    int temp,first=nums[0],second=max(nums[0],nums[1]);
    if(numsSize==1){
        return nums[0];
    }else if(numsSize==2){
        second=max(nums[0],nums[1]);
        return second;
    }else{
        for(int i=2;i<numsSize;i++){
            temp=second;
            second=max(second,first+nums[i]);
            first=temp;
        }
    }
    return second;
}


int main (){
	int a[5]={2,7,9,3,1};
	printf("%d",rob(a,5));
	return 0;
} 
