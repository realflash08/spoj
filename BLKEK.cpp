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
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();


 ll dp[100001],ke[100001],k[100001];
int main()
{
    TEST
    {
        string s;
        cin>>s;
        MEM(dp,0);
        MEM(k,0);
        MEM(ke,0);
        int n=s.length();
        rep(i,1,n+1)
        {
            if(s[i-1]=='p')
            {
               dp[i]=ke[i-1];
               k[i]++;
            }
            else if(s[i-1]=='o')
            {
                ke[i]+=k[i-1];
            }

            ke[i]+=ke[i-1];
            k[i]+=k[i-1];
            dp[i]+=dp[i-1];
         //   cout<<k[i]<<" "<<ke[i]<<" "<<dp[i]<<"\n";
        }
        printf("%lld\n",dp[n]);

    }
}
