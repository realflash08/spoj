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
#define prl(x) printf("%lld\n",x)
#define ff first
#define ss second
#define BE(a) a.begin(), a.end()

int MAX=numeric_limits<int>::max();

//ios_base::sync_with_stdio(0);cin.tie(0);
ll dp[2003],dpp[2003];
int main()
{
    dpp[0]=0;
    dpp[1]=1;
    rep(i,2,201)
    {
        dpp[i]=2*dpp[i-1]+(1<<(i-1));
    }
    rep(i,1,200)
    {
        dp[i]=dpp[i-1]+1;
    }
   // rep(i,1,100)
   // cout<<i<<" - "<<dp[i]<<"\n";
    TEST
    {
        ll n;
        sl(n);
        int a[1002]={0};
        int ans;
        ll sum=0;
        for(int i=60;i>=1;i--)
        {
            if(n>=dp[i]+sum*((ll)(1<<(i-1))))
            {
             //   cout<<" - "<<i<<" "<<dp[i]<<"\n";
                a[i]=1;
                n-=(dp[i]+sum*((ll)(1<<(i-1))));
                sum+=1;
            }
        }
        if(n>0)
            cout<<"Does Not Exist.\n";
        else
        {
            ll x=0;
            rep(i,1,61)
            {
                if(a[i]==1)
                x=x|((ll)((ll)1<<(ll)(i-1)));
            }
            cout<<x<<"\n";
        }

    }


}
