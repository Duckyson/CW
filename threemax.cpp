#include<stdio.h>
#include<stdlib.h>

//从不重叠的两个子数字求最大和 泛化到不重叠的三个
//两个的情况是 同时滑动2个窗口 右边的窗口可以和左边的现在以及以往任意情况组合 得到一个2个窗口之和的最大值
int* maxSumOfThreeSubarrays(int* nums, int numsSize, int k)
{
    
    int *res =(int*)malloc(3);

    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < k; i++) //先求初始的三个和
    {
        sum1 += nums[0 + i];
        sum2 += nums[k + i];
        sum3 += nums[2 * k + i];
    }

    int maxsum1 = sum1, index1 = 0, 
        maxsum2 = maxsum1 + sum2, index22 = k, index21 = index1,
        maxsum3 = maxsum2 + sum3, index33 = 2 * k, index32 = index22, index31 = index1; 
        //maxsum3是用sum3 + maxsum2 比较是否更新
    for(int i = 0; 3 * k + i < numsSize; i++) //同时滑动三个窗口向右移一格
    {
        sum1 += nums[k + i] - nums[0 + i];
        if(sum1 > maxsum1)
            maxsum1 = sum1, index1 = i + 1;

        sum2 += nums[2 * k + i] - nums[k + i];
        if(sum2 + maxsum1 > maxsum2)
            maxsum2 = sum2 + maxsum1, index22 = k + i + 1, index21 = index1;
        
        sum3 += nums[3 * k + i] - nums[2 * k + i];
        if(sum3 + maxsum2 > maxsum3)
            maxsum3 = sum3 + maxsum2, index33 = 2 * k + i + 1, index32 = index22, index31 = index21;
    }
    res[0] = index31, res[1] = index32, res[2] = index33;
    return res;
}

int main(){
	int* m;
	int *a,b[100],i;
	char ch;
	for(i=0;ch!='\n';i++){
		scanf("%d%c",&b[i],&ch);
	}
	int k;
	scanf("%d",&k);
	a=maxSumOfThreeSubarrays(b, i, k);
	printf("%d %d %d",a[0],a[1],a[2]);
	return 0;
}
