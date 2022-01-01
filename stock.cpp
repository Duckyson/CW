int maxProfit(int* prices, int pricesSize){
    int max=0;
    int s=prices[0],e=prices[0];
    for(int i=1;i<pricesSize;i++){
        max=fmax(max,prices[i]-s);
        s=fmin(s,prices[i]);
    }
    return max;
}
