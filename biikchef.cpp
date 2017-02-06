// by realflash
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
#define MEM(a,b) memset(a,(b),sizeof(a))
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define sl(x) scanf("%lld",&x)
#define ff first
#define ss second
#define prl(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

//ios_base::sync_with_stdio(0);cin.tie(0);
int n,m,f[103000],p[130000],vis[130000],ind[123000];
string s[130000];
pii pp[130000];
int main()
{
    si(n);
    si(m);
    int y;
    rep(i,0,n)
    {
        int x;
        si(x);
        ind[x]=1;
    }
    rep(i,0,m)
    {
        si(f[i]);
        si(p[i]);
        cin>>s[i];
        pp[i]={p[i],i};
    }
    //cin>>y;
    sort(pp,pp+m);
    for(int i=m-1;i>=0;i--)
    {
        if(ind[f[pp[i].ss]]==1)
        {
            vis[i]=1;
            cout<<s[pp[i].ss]<<"\n";
        }
    }
    for(int i=m-1;i>=0;i--)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            cout<<s[pp[i].ss]<<"\n";
        }
    }
}
