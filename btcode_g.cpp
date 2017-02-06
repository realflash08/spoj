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
#include<deque>
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)
#define scand(x) scanf("%d",&x)
#define scanlld(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int root[200030],color[200063],siz[200034];
vector <int > v[200063];
int finde(int i)
{
    if(i!=root[i])
    {
        root[i]=finde(root[i]);
    }
    return root[i];
}


int main()
{
    int n,q,x,y,c,e,a,b;
    scand(n);
    e=n-1;
    for(int i=0;i<=n;i++)
    {
        root[i]=i;
        color[i]=0;
    }
    while(e--)
    {
        scand(x);
        scand(y);
        v[x].pb(y);
        v[y].pb(x);
    }
    scand(q);
    while(q--)
    {
        scand(c);
        scand(a);
        scand(b);
        if(c==1)
        {
            color[a]=b;
            for(int i=0;i<v[a].size();i++)
            if(color[a]==color[v[a][i]])
            {
                int r=finde(v[a][i]);
                root[r]=a;
            }
        }
        else
        {
            if(finde(a)==finde(b))
                    printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
