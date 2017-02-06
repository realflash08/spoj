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
vector<int> v[100010];

int vis[100002]={0};
int dp[7000][7000],l,h,g;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();

        memset(dp,0,sizeof(dp));
        for(int g=1;g<n;g++)
            for(l=0,h=g;h<n;h++,l++)
        {
            dp[l][h]=(s[l]==s[h])?dp[l+1][h-1]:(min(dp[l+1][h],dp[l][h-1])+1);
        }
        cout<<dp[0][n-1]<<"\n";
    }
}
