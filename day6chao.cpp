int main()
{
    int n, m;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
        scanf("%d", a+i);

    a[0] = a[n+1] = 0; //�߽�Ĭ��Ϊ0

    n = unique(a, a+n+2) - a; //ȥ�������ظ�Ԫ��

    for(int i=1; i<n-1; i++)
        if(a[i-1]<a[i] && a[i]>a[i+1])              //͹��
            cnt[a[i]]++;
        else if(a[i-1]>a[i] && a[i]<a[i+1])         //����
            cnt[a[i]]--;
    // ��ȥ�أ������ڵ����������

    int ans=0, sum=0;
    for(int i=10000; i>0; i--) {
        sum += cnt[i];                              //��ֵ�ǰ׺�ͼ�Ϊ��
        ans = max(ans,sum);
    }

    printf("%d\n",ans);
}

���ߣ�220284
���ӣ�https://www.acwing.com/solution/content/76081/
��Դ��AcWing
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
