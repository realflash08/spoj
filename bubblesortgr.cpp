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




int a[300003],dp[300400];
int main()
{

    int n,c=0,t=0,x,maxx=300403,ans=0;
    cin>>n;
    rep(i,0,n)
    {
        cin>>a[i];
    }
    rep(i,0,n+2)
    dp[i]=maxx;
    dp[0]=0;
    rep(i,0,n)
    {
        int l=0,r=n+1,mid;
        while(r-l>1)
        {
            mid=(l+r)/2;
            if(dp[mid]<a[i])
            {
                l=mid;
            }
            else
                r=mid;
        }
      //  cout<<l<<"\n";
        dp[l+1]=a[i];
        ans=max(ans,l+1);
    }
    cout<<ans<<"\n";

}
