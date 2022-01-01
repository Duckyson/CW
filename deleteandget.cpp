#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int deleteAndEarn(int* nums, int numsSize){
    int a[1000],b[1000],sum=0,l=0,i=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    if(numsSize==1) return nums[0];
    else if(numsSize==2&&nums[0]+1==nums[1]) return fmax(a[0],a[1]);
    for(i=0;i<=nums[numsSize-1]-nums[0];i++){
        a[i]=nums[0]+i;
        b[i]=0;
    }
    for(i=0;i<numsSize;sum++){
        if(a[sum]==nums[i]){
            for(l=0;l<numsSize-i;l++){
                if(a[sum]==nums[i+l]){
                    b[sum]++;
                }else{
                    break;
                }
            }
            i+=l-1;i++;
        }
    }
    for(i=0;i<=nums[numsSize-1]-nums[0];i++){
        a[i]*=b[i];
    }
    int first=a[0],second=fmax(a[0],a[1]);
    for(i=2;i<sum;i++){
        int temp=second;
        second=fmax(first+a[i],second);
        first=temp;
    }
    return second;
}
int main(){
	int c[2]={3,1};
	printf("%d",deleteAndEarn(c,2));
	return 0;
}
