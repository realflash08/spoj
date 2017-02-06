// by realflash
#include<bits/stdc++.h>
using namespace std;

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
#define bitcnt(x) __builtin_popcountll(x)
#define mo 10000007

int MAX=numeric_limits<int>::max();


    ll a[33];
    ll po[36];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int hh=1;
    TEST{
        MEM(a,0);
    int n;
    si(n);
    ll ans=0,x;
    rep(i,0,n)
    {
        sl(x);
        rep(j,0,33)
        {
            if((x>>j)&1==1)
            {
                ll d=i-a[j];
                ans=(ans+d)%mo;
            }
            else
            {
                ll d=a[j];
                ans=(ans+d)%mo;
            }
        }
        rep(j,0,33)
        {
            if((x>>j)&1==1)
               a[j]=(a[j]+1)%mo;
        }
//cout<<ans<<"\n";
    }
   printf("Case %d: %lld\n",hh,((ans+ans)%mo));
    hh++;
    }

}
