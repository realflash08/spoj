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


bool fun(pair<pii,int> p,pair<pii,int> q)
{
    if(p.first.first*p.first.second>q.first.first*q.first.second)
        return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int ans=0;
        pair<pii,int> a[1000];
        int p=0,x,y,z,h;
        int dp[1022];

        rep(i,0,n)
        {
            cin>>x>>y>>z;
            a[p++]=mk(mk(x,y),z);
            a[p++]=mk(mk(y,z),x);
            a[p++]=mk(mk(z,x),y);
            a[p++]=mk(mk(y,x),z);
            a[p++]=mk(mk(z,y),x);
            a[p++]=mk(mk(x,z),y);
        }
        sort(a,a+p,fun);

        ans=dp[0]=a[0].second;

        rep(i,1,p)
        {
            dp[i]=0;
            rep(j,0,i)
            if(a[j].first.first>a[i].first.first&&a[j].first.second>a[i].first.second)
                dp[i]=max(dp[i],a[i].second+dp[j]);
            ans=max(ans,dp[i]);
        }
        cout<<ans<<"\n";
        cin>>n;
    }

}
