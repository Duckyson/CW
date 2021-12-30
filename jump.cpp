#include<stdio.h>

bool canJump(int* nums, int numsSize){
    int max=0,i=0;
    for( i=0;i<numsSize-1;i++){
        if(i+nums[i]>max){
            max=i+nums[i];
        }
        if(max>=i+1) continue;
        else break;
    }
    if(max>=numsSize-1) return true;
    return false;
}
