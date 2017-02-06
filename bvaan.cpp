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
int dp[200][200][200];

int main()
{
    int t,s;
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        int n1,n2,k;
        string a,b,str;
        cin>>a>>b>>k;
        n1=a.length(),n2=b.length();
        for(int l=0;l<=k;l++)
        for(int i=0;i<=n1;i++)
            for(int j=0;j<=n2;j++)

        {
            if(l==0||i==0||j==0)
                dp[i][j][l]=0;
            else{
                    dp[i][j][l]=max(dp[i-1][j][l],dp[i][j-1][l]);
            if(a[i-1]==b[j-1])
            {
                    dp[i][j][l]=max(dp[i][j][l],a[i-1]+dp[i-1][j-1][l-1]);
            }
            }

            //cout<<i<<" "<<j<<" "<<l<<" "<<dp[i][j][l]<<"\n";
        }
        if(dp[n1][n2][k]==dp[n1][n2][k-1])
            cout<<0<<"\n";
        else
        cout<<dp[n1][n2][k]<<"\n";

    }
}
