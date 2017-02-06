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
#define TEST int t; cin >> t;while(t--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();


ll a[102000];

int main()
{
   // ios_base::sync_with_stdio(0);
    ll n,s,i,j,p=10020000000,ans;

    TEST
    {
        sl(n);
        sl(s);
        rep(i,1,n+1)
        sl(a[i]);
        ans=0;
        a[0]=0;
        rep(i,1,n+1)
        a[i]=a[i-1]+a[i];
        i=1,j=1;
        while(i<n+1&&j<n+1)
        {
            while(a[j]-a[i-1]<=s&&j<=n)
            {
                j++;
            }
            if(i<=j-1)
            {
             //  cout<<a[j-1]-a[i-1]<<"\n";
                if(j-i>ans||((j-i)==ans&&p>a[j-1]-a[i-1]))
                {
               //   cout<<"--"<<i<<" "<<j<<"\n";
                    ans=j-i;
                    p=a[j-1]-a[i-1];
                }
            }
            i++;
        }
        cout<<p<<" "<<ans<<"\n";
    }
}

