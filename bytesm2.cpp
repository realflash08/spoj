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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w,a[300][300],dp[300][300],ma=0;
        memset(dp,0,sizeof(dp));
        cin>>h>>w;
        rep(i,0,h)
        rep(j,0,w)
        {
            cin>>a[i][j];
            if(i==0)
                {dp[i][j]=a[i][j];
                ma=max(ma,dp[i][j]);
                }
        }
        rep(i,1,h)
        {
            rep(j,0,w)
            {
                dp[i][j]=a[i][j];
                if(j>0)
                dp[i][j]=max(dp[i][j],a[i][j]+dp[i-1][j-1]);
                if(j<w-1)
                dp[i][j]=max(dp[i][j],a[i][j]+dp[i-1][j+1]);
                dp[i][j]=max(dp[i][j],a[i][j]+dp[i-1][j]);
                ma=max(ma,dp[i][j]);
            }
        }
        cout<<ma<<"\n";


    }
}
