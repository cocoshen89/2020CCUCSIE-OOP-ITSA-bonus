//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50106
#include<queue>
#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;

int main()
{
    int n,m,ans=0,tmp_ans,farmland=0;
    //cin input m and n and map
    cin >> m >> n;
    int maps[n][m];
    int mark[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> maps[i][j];
            mark[i][j]=0;
        }
    }
    //do BFS find max
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(maps[i][j] != 0 && mark[i][j] == 0)
            {
                farmland++;
                tmp_ans=0;
                queue< pair<int,int> > queueB;
                queueB.push({i,j});
                while(queueB.size()>0)
                {
                    int a=queueB.front().first;
                    int b=queueB.front().second;
                    queueB.pop();
                    if(mark[a][b] == 0)
                    {
                        tmp_ans+=maps[a][b];
                        mark[a][b]=1;
                    }
                    //go up down left right
                    if(a-1>=0)
                    {
                        if(maps[a-1][b] != 0 && mark[a-1][b] == 0)
                            queueB.push({a-1,b});
                    }
                    if(a+1<n)
                    {
                        if(maps[a+1][b] != 0 && mark[a+1][b] == 0)
                            queueB.push({a+1,b});
                    }
                    if(b-1>=0)
                    {
                        if(maps[a][b-1] != 0 && mark[a][b-1] == 0)
                            queueB.push({a,b-1});
                    }
                    if(b+1<m)
                    {
                        if(maps[a][b+1] != 0 && mark[a][b+1] == 0)
                            queueB.push({a,b+1});
                    }
                }
                ans=max(ans,tmp_ans);
            }
        }
    }
    cout << farmland << endl;
    cout << ans << endl;
    return 0;
}
