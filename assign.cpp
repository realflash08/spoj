#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long dp[1049999];
int main()
{
    long long t ,n,a[21][21],s,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        memset(dp,0,sizeof(dp));
        dp[(1<<n)-1]=1;
        for(long long bm=(1<<n)-2;bm>=0;bm--)
        {
            s=0;
            dp[bm]=0;
            for(int i=0;i<n;i++)
                s+=((bm>>i)&1);
            for(int i=0;i<n;i++)
                if(a[s][i]==1&&(bm&1<<i)==0)
                dp[bm]+=dp[bm|(1<<i)];
        }
        cout<<dp[0]<<"\n";

    }
}
