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


        int  a[30][30],dp[30][5000000],mask[20][5000000], ind[20]={0};
inline int no_on(int n)
{
    int s=0;
    while(n>0)
    {
        if(n%2==1)
            s++;
        n>>=1;
    }
    return s;
}
int main()
{
    int t,n;
    //cout<<no_on(7);
    rep(i,0,1048600)
    {
        int p=no_on(i);
        mask[p][ind[p]]=i;
        ind[p]++;
    }

    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        cin>>n;
        rep(i,0,n)
        rep(j,0,n)
        scanf("%d",&a[i][j]);
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int l=0;l<ind[i];l++)
            {
                int j=mask[i][l];
                if(j>(1<<(n)))
                    break;
                for(int k=0;k<n;k++)
                {

                    int f=(1<<k);
                    if((j&f)==f&&(j|f)==j)
                    {
                       // if(i==3&&j==7)
                        //cout<<"\t\t"<<k<<"\n";
                        if(a[k][i-1]==1)
                        {
                            dp[i][j]+=dp[i-1][j^f];
                        }
                    }
                }


               // if(dp[i][j]>0)
              //  cout<<i<<" "<<j<<" "<<dp[i][j]<<"\n";

            }

        }
        cout<<dp[n][(1<<n)-1]<<"\n";

    }
}
