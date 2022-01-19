#include<iostream>
using namespace std;
 

int main()
{
	long long n,N;
	cin >> n >> N;
long long a[n+1],b[N];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	a[n + 1] = N;
	long long res = 0,i = 0,j = 0,cnt=0,r=0;
        r = N / (n + 1);
	for (cnt = 1; cnt * r < N;cnt++)
		b[cnt] = cnt * r;
	b[cnt++] = N;
	while (i < n+1 || j < cnt-1)
	{
		if (a[i] == b[j])
		{
			res += (min(a[i + 1], b[j + 1]) - a[i]) * abs(i - j);
			i++, j++;
		}
		else if (a[i] < b[j])
		{
			res += (min(a[i + 1], b[j]) - a[i]) * abs(j - 1 - i);
			i++;
		}
		else
		{
			res += (min(b[j + 1], a[i]) - b[j]) * abs(i - 1 - j);
			j++;
		}
	}
	cout << res;
	return 0;
}
