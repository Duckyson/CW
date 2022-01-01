int maxProfit(int* prices, int pricesSize){
    int max=0,s=prices[0],sum=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<prices[i-1]){
            sum+=max;
            s=prices[i];
            max=0;

            
        }else{
            max=fmax(max,prices[i]-s);
        }
    }
    return sum+max;
}
