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
//单词拆分：
// 给你一个字符串 s 和一个字符串列表 wordDict 作为字典。请你判断是否可以利用字典中出现的单词拼接出 s 。
