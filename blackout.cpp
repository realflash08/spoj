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
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

ll mat[2003][2003],s[2003][2003];
ll dp[2002][2003];
int main()
{
    MEM(dp,0);
    MEM(s,0);
    ll n,a[2000],b[2000],q,k,m;
    sl(n);
    sl(m);
    sl(q);
    sl(k);
    rep(i,1,n+1)
    rep(j,1,m+1)
    sl(mat[i][j]);

    rep(i,1,n+1)
    rep(j,1,m+1)
    {
        s[i][j]=mat[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];

        //cout<<mat[i][j]<<" "<<s[i-1][j]<<" "<<s[i][j-1]<<" "<<s[i-1][j-1]<<" "<<s[i][j]<<" "<<"\n";

    }
    int p=1;
    while(q--)
    {
        int i,j,x,y;
        si(i);
        si(j);
        si(x);
        si(y);

        a[p]=s[x][y]-s[i-1][y]-s[x][j-1]+s[i-1][j-1];
        b[p]=(x-i+1)*(y-j+1);
        p++;
       // cout<<a[p-1]<<" "<<b[p-1]<<"--\n";
    }

    for(int i=1;i<p;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(a[i]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+b[i]);
              //  cout<<"("<<i<<" "<<j<<" "<<dp[i][j]<<")---";
        }
       // cout<<"\n";
    }
    cout<<dp[p-1][k]<<"\n";
}
