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
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

struct node
{
    ll s;
    void merg(node a,node b)
    {
        s=min(a.s,b.s);
    }
};

node seg[600000];
ll lazy[600000];

void update(int l,int r,int pos,ll x)
{
    if(l>en||r<st)
    {
        return ;
    }
    else
    {
        if(l>=st&&r<=en)
        {
            if()
        }
    }
}
int main()
{
    TEST
    {

    }

}
