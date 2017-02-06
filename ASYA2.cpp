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



int main()
{
    ll n,m,a[10003]={0},b[10003]={0},p;
    cin>>n>>m;
    string s;
    rep(i,0,n)
    {
        cin>>s;
        p=s.length();
        rep(j,0,p)
        {
            int c=(s[j]-65);
            a[i]=(a[i]|((ll)1<<c));
        }
    }
     rep(i,0,m)
    {
        cin>>s;
        p=s.length();
        rep(j,0,p)
        {
            int c=(s[j]-65);
            b[i]=(b[i]|((ll)1<<c));
        }
    }
    ll ans=0;
     ll x=1<<26;
    x--;
   // cout<<x<<"\n";
    rep(i,0,n)
    rep(j,0,m)
    {
        if((a[i]|b[j])==x)
            {
             //   cout<<i<<" "<<j<<"\n";
                ans++;
            }
    }
    cout<<ans<<"\n";


}
