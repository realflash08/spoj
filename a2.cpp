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
void mul(ll f[2][2],ll g[2][2])
{

    f[0][0]=(f[0][0]*g[0][0]+f[0][1]*g[1][0])%mo;
    f[0][1]=(f[0][0]*g[1][0]+f[0][1]*g[1][1])%mo;
    f[1][0]=(f[1][0]*g[0][0]+f[1][1]*g[1][0])%mo;
    f[1][1]=(f[1][0]*g[1][0]+f[1][1]*g[1][1])%mo;
}

void pow(ll f[2][2],ll n)
{
    if(n==0||n==1)
    {
        return ;
    }
    ll m[2][2]={{1,1},{1,0}};
    pow(f,n/2);
    mul(f,f);
    if(n%2!=0)
        mul(f,m);
}

ll fib(ll n)
{
    ll f[2][2]={{1,1},{1,0}};
    if(n==0)
        return 0;
    pow(f,n-1);
    return f[0][0];
}
long long fibonacci(ll n)
{
    long long fib[2][2]= {{1,1},{1,0}},ret[2][2]= {{1,0},{0,1}},tmp[2][2]= {{0,0},{0,0}};
    int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                        tmp[i][j]=(tmp[i][j]+ret[i][k]*fib[k][j])%mo;
            for(i=0; i<2; i++) for(j=0; j<2; j++) ret[i][j]=tmp[i][j];
        }
        memset(tmp,0,sizeof tmp);
        for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                    tmp[i][j]=(tmp[i][j]+fib[i][k]*fib[k][j])%mo;
        for(i=0; i<2; i++) for(j=0; j<2; j++) fib[i][j]=tmp[i][j];
        n/=2;
    }
    return (ret[0][1]);
}
int main()
{
    TEST
    {
        ll n;
        cin>>n;
        if(n==0)
            cout<<0<<"\n";
        else
        cout<<fibonacci(n+1)<<"\n";
    }

}
