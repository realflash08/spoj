#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<stack>
#include<queue>
#include<bitset>
#include<map>
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();


int xx[]={-1,0,1,0},yy[]={0,-1,0,1};
int vis[600][600];
int d[600][600],cnt[600][600];
string b[600];
int main()
{
    TEST
    {
        string a[600];
        int r,c;
        queue<pair<pii,int> >q;
        rep(i,0,r)
        rep(j,0,c)

        rep(i,0,r)
        {cin>>a[i];
        b[i]=a[i];
        }

        rep(i,0,r)
        rep(j,0,c)
        {
            if(a[i][j]>='a'&&a[i][j]<='z')
            {
                MEM(vis,0);
                int mi=100000;
                q.push(mk(mk(i,j),0));
                while(!q.empty())
                {
                    pair<pii,int> p=q.front();
                    int x=p.first.first;
                    int y=p.first.second;
                    int z=p.second;



                    if(dis[x][y]<=z)
                    {
                        if(dis[x][y]==z)
                        cnt[x][y]++;
                        else
                            {cnt=1;
                            b[x][y]=a[i][j];
                            }
                        dis[x][y]=z;
                        rep(k,0,4)
                        {
                            int u=x+xx[k],v=y+yy[k];
                            if(u>=0&&u<r&&v>=0&&v<c&&a[u][v]=='.')
                            {
                                if(vis[u][v]==0)
                                    q.push(mk(u,v),dis[x][y]+1);
                            }
                        }

                    }
                }
            }

            rep(i,0,r)
            rep(j,0,c)
            {
                if(!((a[i][j]>='a'&&a[i][j]<='z')||a[i][j]=='#'))
                {
                    if(cnt[i][j]==1)
                        a[i][j]=b[i][j];
                    else
                        a[i][]
                }
            }

        }
    }

}
