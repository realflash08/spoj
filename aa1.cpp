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
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();



int main()
{
TEST{
    ll n=0;
    string s;
    cin>>s;
    rep(i,0,s.length())
    {
        if(s[i]>=48&&s[i]<=57)
            n+=(s[i]-48);
    }
    cout<<n<<"\n";
}
}
