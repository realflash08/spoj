#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<cmath>

int main()
{
    long long n,a,b,c,d,freq[4],r,s,t,buff,ind,ma;
    cin>>t;
    while(t--)
    {
long long dp[10000]={0};
            cin>>n>>a>>b>>c>>d;
            dp[a]=1,dp[b]=1,dp[c]=1,dp[d]=1;
            for(int i=1;i<=n;i++)
                {

                    if(i-a>0&&dp[i-a]>0)
                    {
                        dp[i]=max(dp[i-a]+1,dp[i]);
                    }
                     if(i-b>0&&dp[i-b]>0)
                    {
                        dp[i]=max(dp[i-b]+1,dp[i]);
                    }
                     if(i-c>0&&dp[i-c]>0)
                    {
                        dp[i]=max(dp[i-c]+1,dp[i]);
                    }
                     if(i-d>0&&dp[i-d]>0)
                    {
                        dp[i]=max(dp[i-d]+1,dp[i]);
                    }

//                    cout<<dp[i]<<"<-\n";

                }
if(dp[n]==0)
    cout<<"-1\n";
else cout<<dp[n]<<"\n";




    }
}
