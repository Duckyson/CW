#include<bits/stdc++.h>
using namespace std;

int n;
char a[1010][1010]; //��ͼ
int vis[1010][1010]={0};  //����Ƿ��ѹ�
int d[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}}; //�ĸ�����
int flag;  //���ڱ����������Ƿ���ȫ��û
void dfs(int x, int y){
    vis[x][y] = 1;      //������'#'���ѹ���ע��Ϊʲô���Է�������
    if(a[x][y+1]=='#' && a[x][y-1]=='#' && a[x+1][y]=='#' && a[x-1][y]=='#')
        flag = 1;       //�������Ҷ���½�أ�������û
    for(int i = 0; i < 4; i++){ //����DFS��Χ��½��
        int nx = x + d[i][0], ny = y + d[i][1];
      //if(nx>=1 && nx<=n && ny>=1 && ny<=n && vis[nx][ny]==0 && a[nx][ny]=='#') //��Ŀ˵���϶���ˮ�����Բ�����ôд��
        if(vis[nx][ny]==0 && a[nx][ny]=='#') //����DFSδ�ѹ���½�أ�Ŀ���Ǳ������
            dfs(nx,ny);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    int ans = 0 ;
    for(int i = 1; i <= n; i++)  //DFS�������ص�
        for(int j = 1; j <= n; j++)
            if(a[i][j]=='#' && vis[i][j]==0){
                flag = 0;
                dfs(i,j);
                if(flag == 0)  //�����ȫ������
                    ans++;     //ͳ�Ƶ�������
            }
    cout<<ans<<endl;
    return 0;
}

