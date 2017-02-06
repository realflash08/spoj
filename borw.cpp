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
#define TEST int t; cin >> t;while(t--)

int dp[202][202][202];
int t,n,a[10000];

int solve(int b,int w,int ind)
{
    if (ind>n)
        return 0;
    if(dp[b][w][ind]!=-1)
        return dp[b][w][ind];
    int s1=0,s2=0,s3=0;
    if(b==0||a[b]<a[ind])
        s1=1+solve(ind,w,ind+1);
    if(w==0||a[w]>a[ind])
        s2=1+solve(b,ind,ind+1);
    s3=solve(b,w,ind+1);
    s1=max(s1,s2);
    s1=max(s1,s3);
    dp[b][w][ind]=s1;
  //  cout<<b<<" "<<w<<" "<<ind<<" "<<dp[b][w][ind]<<"\n";
    return s1;
}


int main()
{
    cin>>n;
    while(n!=-1)
    {
        memset(dp,-1,sizeof(dp));

        rep(i,1,n+1)
        {
            cin>>a[i];
        }
        int s1=1+solve(1,0,2),s2=1+solve(0,1,2),s3=solve(0,0,2);
        s1=max(s1,s2);
        s1=max(s1,s3);
        cout<<n-s1<<"\n";
        cin>>n;
    }
}
