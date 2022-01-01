int getMaxLen(int* nums, int numsSize){
    int max=0,num=0;
    int z=0,f=0,j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            num+=1;f+=1,j+=1;
            if(num%2==0){ 
                z=f;    
            }else{
                if(num==1)
                j=0;
                
                z=0;
            }
            max=fmax(z,max);
        }else if(nums[i]>0){
            f+=1;
            z+=1;
            j+=1;
            max=fmax(z,max);
        }else{
            if(num%2==1&&num>1) max=fmax(j,max);
            z=0;f=0;num=0;j=0;
        }
    }
    if(num%2==1&&num>1) max=fmax(j,max);
    return max;
}
