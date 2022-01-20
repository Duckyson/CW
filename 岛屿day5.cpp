#include<bits/stdc++.h>
using namespace std;

int n;
char a[1010][1010]; //地图
int vis[1010][1010]={0};  //标记是否搜过
int d[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}}; //四个方向
int flag;  //用于标记这个岛中是否被完全淹没
void dfs(int x, int y){
    vis[x][y] = 1;      //标记这个'#'被搜过。注意为什么可以放在这里
    if(a[x][y+1]=='#' && a[x][y-1]=='#' && a[x+1][y]=='#' && a[x-1][y]=='#')
        flag = 1;       //上下左右都是陆地，不会淹没
    for(int i = 0; i < 4; i++){ //继续DFS周围的陆地
        int nx = x + d[i][0], ny = y + d[i][1];
      //if(nx>=1 && nx<=n && ny>=1 && ny<=n && vis[nx][ny]==0 && a[nx][ny]=='#') //题目说边上都是水，所以不用这么写了
        if(vis[nx][ny]==0 && a[nx][ny]=='#') //继续DFS未搜过的陆地，目的是标记它们
            dfs(nx,ny);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    int ans = 0 ;
    for(int i = 1; i <= n; i++)  //DFS所有像素点
        for(int j = 1; j <= n; j++)
            if(a[i][j]=='#' && vis[i][j]==0){
                flag = 0;
                dfs(i,j);
                if(flag == 0)  //这个岛全部被淹
                    ans++;     //统计岛的数量
            }
    cout<<ans<<endl;
    return 0;
}

