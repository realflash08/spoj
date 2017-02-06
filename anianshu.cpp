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
#define mo 1000000007


int main()
{
    TEST
    {
        ll n,l,a[100030],s;
        ll s1=0,s2=0;
        scanf("%lld %lld",&l,&n);
        rep(i,0,n)
        {
            sl(a[i]);
            s1=max(s1,min(abs(1-a[i]),abs(l-a[i])));
            s2=max(s2,max(abs(1-a[i]),abs(l-a[i])));
        }
        printf("%lld %lld\n",s1,s2);


    }
}
