#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<bitset>
#define ll long long
#define rep(p,q,r) for(int p=q;p<r;p++)
vector<int > v[100010];

int vis[100002]={0},color[100003];
int ans=0;


void dfs(int s,int f)
{
    vis[s]=1;

        color[s]=f;
    //cout<<s<<" "<<color[s]<<"\n";
    for(int i=0;i<v[s].size();i++)
    {
         if(color[v[s][i]]==f)
         {
             ans =-1;
             return;
         }
        if(vis[v[s][i]]==0)
        {
            dfs(v[s][i],((f+1)%2));
        }
    }
}

int main()
{
long long t,n,e;
int x,y;
cin>>n;
while(n!=0)
{
cin>>e;
    memset(vis,0,sizeof(vis));
    memset(color,-1,sizeof(color));
    for(int i=0;i<=n;i++)
    v[i].clear();
    ans =0;

    while(e--)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
            {
                dfs(i,0);
                 p++;
            }

    }

    if(ans==-1)
        cout<<"NOT BICOLORABLE\n";
    else
        cout<<"BICOLORABLE\n";
        cin >>n;
}

}
