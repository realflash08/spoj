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

double dp[600][2000];

int main()
{
    memset(dp,0,sizeof(dp));
    dp[1][1]=1.0/6.0;
    dp[1][2]=1.0/6.0;
    dp[1][3]=1.0/6.0;
    dp[1][4]=1.0/6.0;
    dp[1][5]=1.0/6.0;
    dp[1][6]=1.0/6.0;
    rep(i,2,600)
    rep(j,1,2000)
    for(int k=1;k<=6&&k<j;k++)
        dp[i][j]+=(dp[i-1][j-k]/6);

    TEST
    {
        int n,k;
    scand(n);
    scand(k);
    if(n>=550&&k>=1910)
        cout<<0<<"\n";

    else {
            int p=floor(dp[n][k]*100);
            printf("%d\n",p);
    }
    }
}
