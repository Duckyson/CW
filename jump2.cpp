int jump(int* nums, int numsSize){
    int first=0,end=0,max=0,num=0;
    for(int i=0;i<numsSize-1;i++){
        max=fmax(max,i+nums[i]);
        if(i==end){
            end=max;
            num++;
        }
    }
    return num;
}
