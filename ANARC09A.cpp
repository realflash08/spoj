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
#define INF 99999999


int vis[100002]={0};

int main()
{
    ll t,n,c,p,h=1;
    string s;
    cin>>s;

    while(s[0]!='-')
    {
        int dp[2004][2][2],op[2004][2][2];
        if(str[0]=='{')
        {
            dp[0][0][0]=1;
            dp[0][0][1]=1;
            dp[0][1][0]=INF;
            dp[0][1][1]=INF;
            op[0][0][0]=0;
            op[0][0][1]=0;
            op[0][1][0]=1;
            op[0][1][1]=1;
        }
        else
        {
            dp[0][0][0]=INF;
            dp[0][0][1]=INF;
            dp[0][1][0]=0;
            dp[0][1][1]=0;
            op[0][0][0]=0;
            op[0][0][1]=0;
            op[0][1][0]=1;
            op[0][1][1]=1;
        }
        rep(i,1,s.length())
        {
            if(str[i]=='{')
                {
                    if(str[i-1]=='{')
                        {
                            if(dp[i-1][0][0]<dp[i-1][0][1])
                            {
                                dp[i][0][0]=dp[i-1][0][0];
                                op[i][0][0]=op[i-1][0][0];
                            }
                            else
                            {
                                dp[i][0][0]=dp[i-1][0][1];
                                op[i][0][0]=op[i-1][0][1];
                            }

                        }
                }
        }




        cin>>s;

    }
}
