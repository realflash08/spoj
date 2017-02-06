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

int main()
{
    TEST
    {
        ll x[3],y[3],z[3];
        rep(i,0,3)
        {
            cin>>x[i];
        }
        rep(i,0,3)
        {
            cin>>y[i];
        }
        rep(i,0,3)
        {
            cin>>z[i];
        }
        ll s=0;
        s=(x[0]+x[1]+x[2]);
        s=max(s,(y[0]+y[1]+y[2]));
        s=max(s,(z[0]+z[1]+z[2]));
        s=max(s,(x[0]+y[0]+z[0]));
        s=max(s,(x[1]+y[1]+z[1]));
        s=max(s,(x[2]+y[2]+z[2]));
        if(s%2==0)
            s--;
        if(s<=0)
            cout<<0<<"\n";
        else cout<<s<<"\n";
    }
}
