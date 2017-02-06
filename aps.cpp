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
ll s[10000003],a[10000003];
int main()
{
for(int i=2;i<10000003;i++)
    a[i]=1;
    for(int i=2;i<10000000;i++)
    {
       // cout<<a[i]<<"\n";
        if(a[i]==1)
        {
            a[i]=i;
            for(int j=2*i;j<=10000000;j+=i)
            if(a[j]==1)
                a[j]=i;
        }
    }
    s[0]=s[1]=0;
    s[2]=2;
    for(int i=3;i<10000001;i++)
        s[i]=s[i-1]+a[i];

    TEST
    {
        int n;
        scand(n);
        prline(s[n]);
    }
}
