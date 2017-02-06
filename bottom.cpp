#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<queue>
#include<stack>
#include<bitset>
#include<map>
#include<limits>
#include<stack>
#define ll long long
typedef pair< string , int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)
#define scand(x) scanf("%d",&x)
#define scanlld(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int vis[100003]={0},lastn,no=0;

vector<int >u[100007];
vector<int >v[100007];
int cnt;
stack< int >st;
int last;
int comp[10000];
void dfs1(int s)
{
    //cout<<s<<" dfs1\n";
    vis[s]=1;
    for(int i=0;i<v[s].size();i++)
    {
        if(vis[v[s][i]]==0)
            dfs1(v[s][i]);
    }

    st.push(s);
}

void dfs2(int s,int c)
{
    vis[s]=0;
    comp[s]=c;
    //cout<<"dfs  "<<s<<"  "<<c<<"\n";
    for(int i=0;i<u[s].size();i++)
        if(vis[u[s][i]]==1)
        dfs2(u[s][i],c);
}


int main()
{
    int n,m,x,y;
    scand(n);
    while(n!=0)
    {
        int cc=0,cb[10000]={0};

        scand(m);
        while(!st.empty())
            st.pop();
        memset(vis,0,sizeof(vis));
        memset(comp,0,sizeof(comp));

        for(int i=0;i<n+4;i++)
            v[i].clear(),u[i].clear();
        while(m--)
        {
            scand(x);
            scand(y);
            v[x].pb(y);
            u[y].pb(x);
        }
        for(int i=1;i<=n;i++)
            if(vis[i]==0)
            dfs1(i);
        while(!st.empty())
        {
            int i=st.top();
           // cout<<i<<" stack\n";
            st.pop();
            if(vis[i]==1)
            {
                dfs2(i,cc);
                cb[cc]=1;
                cc++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(comp[i]!=comp[v[i][j]])
                {
                    cb[comp[i]]=0;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)
            if(cb[comp[i]]==1)
            printf("%d ",i);
        cout<<"\n";
        scand(n);
    }
}

