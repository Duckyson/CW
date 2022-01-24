#include <iostream>

using namespace std;
const int mod = 1e9+7;
const int N = 55;
int n, m, k, c, s[N][N];
long long dp[N][N][N][N];

int main()
{
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> s[i][j];
            s[i][j]++;
        }
    }
    for(int i = 1; i <= 13; i++) {
        dp[n][m][k][i] = 1;
        if(s[n][m] > i)
            dp[n][m][k-1][i] = 1;
    }

    for(int i = n; i >= 1; i--){
        for(int j = m; j >= 1; j--){
            for(int t = k; t >= 0; t--){
                for(int c = 13; c >= 0; c--){
                    if(i == n && j == m && (t == k || t == k-1)) continue;
                    if(s[i][j] > c){
                        dp[i][j][t][c] = (dp[i][j+1][t+1][s[i][j]] + 
                                        dp[i+1][j][t+1][s[i][j]] +
                                        dp[i][j+1][t][c] + 
                                        dp[i+1][j][t][c]) % mod;
                    }else{
                        dp[i][j][t][c] = (dp[i][j+1][t][c] + 
                                        dp[i+1][j][t][c])%mod;
                    }
                }
            }
        }
    }
    cout << dp[1][1][0][0] << endl;
    return 0;
}


