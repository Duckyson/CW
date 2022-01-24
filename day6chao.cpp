int main()
{
    int n, m;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
        scanf("%d", a+i);

    a[0] = a[n+1] = 0; //边界默认为0

    n = unique(a, a+n+2) - a; //去掉相邻重复元素

    for(int i=1; i<n-1; i++)
        if(a[i-1]<a[i] && a[i]>a[i+1])              //凸峰
            cnt[a[i]]++;
        else if(a[i-1]>a[i] && a[i]<a[i+1])         //凹谷
            cnt[a[i]]--;
    // 因去重，不存在等于左右情况

    int ans=0, sum=0;
    for(int i=10000; i>0; i--) {
        sum += cnt[i];                              //差分的前缀和即为答案
        ans = max(ans,sum);
    }

    printf("%d\n",ans);
}

作者：220284
链接：https://www.acwing.com/solution/content/76081/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
