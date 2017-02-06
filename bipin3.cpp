#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<bitset>
#define ll long long
typedef pair<ll , ll > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)

ll power(ll a, ll p)
{
	if(p==1) return a;
	if(p==0) return 1;
	if(a==0) return 0;
	if(a==1) return 1;
	ll inter=(power(a,p/2)*power(a, p%2))%1000000007;
	return (power(a, p/2)*inter)%1000000007;
}


int main()
{
    TEST
    {
        ll n,k;
        cin>>n>>k;
        cout<<(k*power(k-1,n-1))%1000000007<<"\n";
    }
}
