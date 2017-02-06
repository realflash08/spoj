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
#define scand(x) scanf("%d",&x)
#define scanlld(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int main()
{
    TEST
    {
        int n,a[100],p,e,o,ee,oo,sum[200],f=0;
        cin>>n>>e>>o;

        for(int i=0;i<(1<<n);i++)
        {
            p=i;
            ee=0,oo=0;
            for(int j=1;j<=n;j++)
            {
                a[j]=(p%2);
               // cout<<a[j]<<" ";
                p>>=1;
            }
          //  cout<<"\n";
            sum[0]=0;
            rep(ii,1,n+1)
            sum[ii]=a[ii]+sum[ii-1];
            int s;
            for(int l=1;l<=n;l++)
            {
                for(int ii=1,jj=l;jj<=n;ii++,jj++)
                {
                    s=(sum[jj]-sum[ii-1]);
                   // cout<<"-----------"<<ii<<" "<<jj<<" = "<<s<<"\n";
                    if(s%2==0)
                        ee++;
                    else oo++;
                }
            }
          //  cout<<ee<<"  "<<oo<<"\n";
            if(ee==e&&oo==o)
            {
                f=1;
                break;
            }

        }
if(f==0)
    cout<<-1<<"\n";
else
{
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

    }
}
