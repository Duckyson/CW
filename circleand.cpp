class Solution {
public:

   int maxSubarraySumCircular(vector<int>& A) {
        int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        for (int& a : A) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            if(curMin>0) curMin=0;
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};
//c++ 
int maxSubarraySumCircular(int* nums, int numsSize){
int pre = 0, maxAns = nums[0],min=0,sum=0,minAns=0;
    for (int i = 0; i < numsSize; i++) {
        min=fmin(min+nums[i],nums[i]);
        if(min>0) min=0;
        minAns=fmin(minAns,min);
        pre = fmax(pre + nums[i], nums[i]);
        maxAns = fmax(maxAns, pre);
        sum+=nums[i];
    }
    return maxAns>0?fmax(maxAns,sum-minAns):maxAns;
}
//c
