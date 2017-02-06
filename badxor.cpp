//dp[i][j]= ways to form j using first i numbers

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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define mo 100000007
ll dp[1029][1039],ind[1039],ans=0;
int main()
{
    int a[2000],b[2000],t,n1,n2;
    cin>>t;
    int hh=1;
    while(t--)
    {
        ans=0;
        memset(dp,0,sizeof(dp));
        memset(ind,0,sizeof(ind));
        cin>>n1>>n2;
        rep(i,0,n1)
        cin>>a[i];
        rep(i,0,n2)
        {cin>>b[i];
        ind[b[i]]=1;
        }

        dp[0][0]=1;
        rep(i,1,n1+1)
        {
            int p=a[i-1];
            rep(j,0,1024)
            {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j^p])%mo;
            }
        }
        ans =0;
        for(int j=0;j<1024;j++)
            if(ind[j]==0)
        {
            ans=(ans+dp[n1][j])%mo;
        }
        if(n1==0&&ind[0]==0)
            ans=1;
        else if( n1==0) ans=0;
        cout<<"Case "<<hh<<": ";
        cout<<ans<<"\n";
    hh++;
    }

}
