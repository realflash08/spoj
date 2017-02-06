#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<queue>
#include<bitset>
#define ll long long
#define IF(x,y) if(x>=0&&x<n&&y>=0&&y<m)
typedef pair<int, int > pii;
#define rep(p,q,r) for(int p=q;p<r;p++)
vector<pair<int,int> > v[100][100];

int vis[102][102]={0};
int level[100][100]={0};

    char a[100][100];
int ma=0;
inline void bfs(int s,int t)
{

    queue<pair<int,int> > q;
    //cout<<s<<" "<<t<<" "<<a[s][t]<<"\n";
    vis[s][t]=1;
    pii temp=make_pair(s,t);
    q.push(temp);
    level[s][t]=1;
    if(ma==0)
        ma=1;
    while(!q.empty())
    {
        int m=q.front().first;
        int n=q.front().second;
        q.pop();
        for(int i=0;i<v[m][n].size();i++)
        {
            if(vis[v[m][n][i].first][v[m][n][i].second]==0)
                {
      //      cout<<v[m][n][i].first<<" "<<v[m][n][i].second<<" "<<a[v[m][n][i].first][v[m][n][i].second]<<"\n";
            vis[v[m][n][i].first][v[m][n][i].second]=1;
            level[v[m][n][i].first][v[m][n][i].second]=level[m][n]+1;
             pii temp=make_pair(v[m][n][i].first,v[m][n][i].second);
             if(a[v[m][n][i].first][v[m][n][i].second]-64>ma)
                ma=a[v[m][n][i].first][v[m][n][i].second]-64;
        //        cout<<"   "<<ma<<"\n";
            q.push(temp);
                }
        }
    }
}



int main()
{
    int y=1;
    int n,m,e,s;
    cin>>n>>m;
    string str;
    while(n>0||m>0)
    {
ma=0;
        rep(i,0,n)
        {
            cin>>str;
            rep(j,0,m)
            a[i][j]=str[j];
        }
        for(int i=0;i<n+3;i++)
            rep(j,0,m+4)
            v[i][j].clear();
        rep(i,0,n)
        rep(j,0,m)
        {
            rep(p,i-1,i+2)
            rep(q,j-1,j+2)
            {
                IF(p,q)
                {
                    if(a[p][q]==a[i][j]+1)
                    {
                        pii temp=make_pair(p,q);
                        v[i][j].push_back(temp);
                    }
                }
            }
        }
        rep(i,0,n)
        rep(j,0,m)
        {
            //cout<<a[i][j]<<" ";

            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            if(a[i][j]=='A')
                bfs(i,j);
        }
printf("Case %d: %d\n",y,ma);
y++;

        cin>>n>>m;
    }
}
