#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

static int A[101][101];
static bool visited[101][101]={false};
static int dx[]={0,1,0,-1};
static int dy[]={1,0,-1,0};
static int N,M;

void bfs(int i, int j)
{
    queue<pair<int,int>> myqueue;
    myqueue.push(make_pair(i, j));
    
    while(!myqueue.empty())
    {
        int now[2];
        now[0]=myqueue.front().first;
        now[1]=myqueue.front().second;
        myqueue.pop();
        visited[i][j]=true;
        
        for(int k=0;k<4;k++)
        {
            int x=now[0]+dx[k];
            int y=now[1]+dy[k];
            
            if(x>=0&&y>=0&&x<N&&y<M)
            {
                if(!visited[x][y]&&(A[x][y]!=0))
                {
                    visited[x][y]=true;
                    A[x][y]=A[now[0]][now[1]]+1;
                    myqueue.push(make_pair(x,y));
                }
            
            }
            
        }
    }
    
}
int main()
{
    cin>>N>>M;
    
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        
        for(int j=0;j<M;j++)
        {
            A[i][j]=s[j]-'0';
        }
    }
    
    bfs(0,0);
    
    cout<<A[N-1][M-1]<<"\n";
    
}