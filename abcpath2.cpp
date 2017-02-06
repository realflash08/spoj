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
int ma=0,ans;

void dfs(int s,int t,ll p)
{
    p++;
   // cout<<s<<" "<<t<<"\n";
    vis[s][t]=1;
    if(p>ma)
        ma=p;
    for(int i=0;i<v[s][t].size();i++)
    {
        if(vis[v[s][t][i].first][v[s][t][i].second]==0)
        {
            dfs(v[s][t][i].first,v[s][t][i].second,p);
        }
    }
}




int main()
{
    int y=1;
    int n,m,e,s;
    char a[100][100];

    string str;
    while(1)
    {
ma=0;
cin>>n>>m;
if(n==0&&m==0)
    break;
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
        ans=0;
        rep(i,0,n)
        rep(j,0,m)
        {
            //cout<<a[i][j]<<" ";
ma=0;
            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            if(a[i][j]=='A')
                dfs(i,j,0);
                if(ma>ans)
                    ans=ma;
        }
printf("Case %d: %lld\n",y,ans);
y++;
    }
}
