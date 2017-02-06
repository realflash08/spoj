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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
vector<int> v[100010];

int vis[100002]={0};

int main()
{
    ll n,a,b,c,d,aa,bb,cc,dd,s=0,s1=0,s2,mi,ma;
    cin>>n>>aa>>bb>>cc>>dd;
    a=aa+bb;
    b=aa+cc;
    c=bb+dd;
    d=cc+dd;
    mi=min(a,b);
    mi=min(mi,c);
    mi=min(mi,d);
    ma=max(a,b);
    ma=max(ma,c);
    ma=max(ma,d);
    for(int i=1;i<=n;i++)
    {
        s1=ma+i+1;
        s2=mi+n+i;
        if(s2>=s1)
            s+=(s2-s1+1);
    }
    cout<<s<<"\n";
}


