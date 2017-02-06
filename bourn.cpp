#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    long long n,a[4],freq[4],r,s,t,dp[10000],buff;
    cin>>t;
    while(t--)
    {
            cin>>n>>a[0]>>a[1]>>a[2]>>a[3];
            sort(a,a+4);
            dp[0]=-1;
            buff=0;
            int f=0;
            for(int i=0;i<4;i++)
                freq[i]=0;
            for(int p=1;p<=n;p++)
            {
                r=p-buff;
                f=0;
                for(int i=0;i<4;i++)
                {
                    if(r%a[i]==0)
                    {
                        f=1;
                        freq[i]+=(r/a[i]);
                        buff=p;
                        dp[p]=freq[0]+freq[1]+freq[2]+freq[3];
                        break;
                    }
                }
                if(f==0)
                {
                    for(int i=0;i<3;i++)
                    {

                    }
                }
                if(f==0)
                    dp[p]=-1;
                cout<<p<<" "<<dp[p]<<"\n";
            }

cout<<dp[n]<<"\n";


    }
}
