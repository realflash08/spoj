 #include <iostream>
 #include <vector>
#include<queue>
using namespace std;

vector<int > v[100];
int vis[100]={0};
int level[100]={0};

void bfs(int s)
{

    queue<int > q;
    cout<<s<<"\n";
    vis[s]=1;
    q.push(s);
    level[s]=0;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++)
        {
            if(vis[v[p][i]]==0)
                {
            cout<<v[p][i]<<"\n";
            vis[v[p][i]]=1;
            level[v[p][i]]=level[p]+1;
            q.push(v[p][i]);
                }
        }
    }
}



int main()
{
    int n,e,p=0,x,y;
    cin>>n>>e;
    while(e--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
            {bfs(i);p++;
            }

    }
    for(int i=1;i<=n;i++)
        cout<<i<<" "<<level[i]<<"\n";
    cout<<"no of conn comp = "<<p<<"\n\n";
}

