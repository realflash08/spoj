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

#define mo 1000000007
//ios_base::sync_with_stdio(0);cin.tie(0);


inline void multiply(ll a[3][3], ll b[3][3])
{
    int mul[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
                mul[i][j] =(mul[i][j]+ a[i][k]*b[k][j])%mo;
        }
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            a[i][j] = mul[i][j];
}

inline void power(ll F[3][3], ll n)
{
    ll M[3][3] = {{0,0,0},{1,0,1},{0,1,2}};


    if (n==1||n==0)
        return ;

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);



}

inline ll findNthTerm(ll n)
{
    ll F[3][3] = {{0,0,0},{1,0,1},{0,1,2}} ;

     power(F, n);
     ll s=0;
     s=(F[0][0]*1+F[1][0]*2+F[2][0]*5)%mo;
     return s;

}
int main()
{
    map<ll,ll>mp;
    TEST
    {


        ll n;
        sl(n);
        if(mp.find(n)!=mp.end())
            printf("%lld\n",mp[n]);
        else {
        if(n==1)
            cout<<3<<"\n";
        else
        {printf("%lld\n",(findNthTerm(n)+findNthTerm(n-1))%mo);
        mp[n]=(findNthTerm(n)+findNthTerm(n-1))%mo;

        }
        }
    }

}
