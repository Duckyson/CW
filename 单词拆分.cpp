#include<stdio.h>
bool wordBreak(char * s, char ** wordDict, int size){
    int n = strlen(s);
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));

    dp[0] = 1;
    for (int j = 1; j <= n; ++j) {
        for (int i = 0; i < size; ++i) {
            int len = strlen(wordDict[i]);
            if (j >= len && strncmp(wordDict[i], &s[j - len], len) == 0) {
                dp[j] |= dp[j - len]; 
            }
        }
    }

    return dp[n];
}
int main(){
	
} 
//���ʲ�֣�
// ����һ���ַ��� s ��һ���ַ����б� wordDict ��Ϊ�ֵ䡣�����ж��Ƿ���������ֵ��г��ֵĵ���ƴ�ӳ� s ��
