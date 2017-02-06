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
#include<map>
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)

int MAX=numeric_limits<int>::max();

int vis[100003],vt[100003],lt[100004],par[100004],root,n,m,tim,art[100003];
vector<int >v[100004];

void dfs(int s,int pr)
{
    vis[s]=1;
    vt[s]=tim;
    lt[s]=tim;
    par[s]=pr;
    tim++;
    cout<<s<<" "<<vt[s]<<" "<<lt[s]<<" "<<par[s]<<"\n";
    int c=0;
    for(int i=0;i<v[s].size();i++)
    {
        if(vis[v[s][i]]==0)
            {
                c++;
                dfs(v[s][i],s);
                lt[s]=min(lt[s],lt[v[s][i]]);

                if(s==root&&c>1)
                {cout<<"yo";
                art[root]=1;}

                if(s!=root&&vt[s]<=lt[v[s][i]])
                art[s]=1;
            }
        else if(v[s][i]!=pr)
         if(vt[v[s][i]]<lt[s])
                {
                    lt[s]=vt[v[s][i]];
                }

    }
    cout<<"\t\t"<<s<<" "<<vt[s]<<" "<<lt[s]<<" "<<par[s]<<"\n";

}

int main()
{
    cin>>n>>m;
    while(n!=0)
    {
        tim=0;
        int x,y;
        memset(vis,0,sizeof(vis));
        memset(art,0,sizeof(art));

        rep(i,0,n+1)
        v[i].clear();
        while(m--)
        {
            scanf("%d %d",&x,&y);
            v[x].pb(y);
            v[y].pb(x);
        }

        root=3;
        dfs(3,-1);
        int tot=0;
        rep(i,1,n+1)
        if(art[i]==1)
            tot++;
        cout<<"total no of cut points "<<tot<<"\n";
        cout<<"------------------------\n";
        rep(i,1,n+1)
        if(art[i]==1)
            cout<<i<<" ";
        cout<<"\n";
        cout<<"------------------------\n";
        cin>>n>>m;
    }

}
