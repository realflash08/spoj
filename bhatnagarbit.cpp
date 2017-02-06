#include "bits/stdc++.h"
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define all(a) a.begin(),a.end()
#define ll long long int
#define pii pair<int, int>
#define pll pair<long long int,long long int>
#define FOR(i,n) for(ll i=0;i<n;i++)
#define BACK(i,n) for(ll i=n-1;i>=0;i--)
#define si(x) scanf("%lld",&x)
#define pi(x) printf("%lld\n",x)
#define sd(x) scanf("%d", &x)
#define pd(x) printf("%d\n",x)
#define ins(x) scanf("%s", x)
#define MAX 31111111
#define mod 1000000007LL
#define BLOCK 555
#define bitcnt(x) __builtin_popcount(x)
#define MS0(x) memset(x, 0, sizeof(x))
using namespace std;
map<ll,ll>last;
map<ll,bool>vis;
ll BIT[500005],a[500005],ans[500005];
ll n,i;
void update(ll idx,ll val)
{
    for(ll x=idx;x<=n;x+=(x&-x))
       {
           cout<<x<<endl;
           BIT[x]+=val;
       }
       cout<<endl;
}
ll query(ll idx)
{
    ll ans =0;
    for(ll x=idx;x>0;x-=(x&-x))
        ans+=BIT[x];
    return ans;
}
int main()
{
    ll t;
    si(t);
    while(t--)
    {
        si(n);
        last.clear();
        vis.clear();
        MS0(BIT);
        for(i=1;i<=n;i++)
        {
            si(a[i]);
        }
        ll q,x,y;
        si(q);
        vector< pair<ll,pair<ll,ll> > >v;
        FOR(i,q)
        {
            si(x);
            si(y);
            v.pb(mp(y,mp(x,i)));
        }
        sort(v.begin(),v.end());
        ll j=0;
        for(i=1;i<=n;i++)
        {
            if(vis[a[i]]==true)
                update(last[a[i]],-a[i]);

            update(i,a[i]);
            last[a[i]]=i;
            vis[a[i]]=true;
            while(j<q && v[j].first==i)
            {
                ans[v[j].second.second]= query(v[j].first) - query(v[j].second.first-1);
                j++;
            }

        }
        for(ll i=0;i<q;++i)
              pi(ans[i]);
    }
}
