int maxProduct(int* nums, int numsSize){
    int imax=1,imin=1,max=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            int tem =imax;
            imax=imin;
            imin=tem;
        }
        imax=fmax(imax*nums[i],nums[i]);
        imin=fmin(imin*nums[i],nums[i]);
        max=fmax(imax,max);
    }
    return max;
}
