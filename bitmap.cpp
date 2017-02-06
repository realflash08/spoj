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
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)

int MAX=numeric_limits<int>::max();
int n,m;
vector<string>inp;
int dp[400][400];
string temp;

int main()
{
    int xx[]={-1,0,1,0},yy[]={0,-1,0,1};
    pii g;
    int x,y,x1,y1;
    int t;
    cin>>t;
    while(t--)
    {
        inp.clear();
        cin>>n>>m;
        rep(i,0,n)
        {
            cin>>temp;
            inp.push_back(temp);
        }
        queue< pii >q;
        rep(i,0,n){
        rep(j,0,m)
        {
            if(inp[i][j]=='1')
                {
                    dp[i][j]=0;
                    q.push(mk(i,j));
                }
                else
                    dp[i][j]=MAX;
                //cout<<s[i][j]<<" "<<i<<" "<<j<<" "<<dp[i][j]<<"\n";
        }
        }
        while(!q.empty())
        {
            g=q.front();
            x=g.first,y=g.second;
            q.pop();
            rep(i,0,4)
            {
                x1=x+xx[i],y1=y+yy[i];
                if(x1>=0&&x1<n&&y1>=0&&y1<m&&dp[x1][y1]>dp[x][y]+1)
                {
                    dp[x1][y1]=dp[x][y]+1;
                    q.push(mk(x1,y1));
                }
            }
        }


        rep(i,0,n)
        {
            rep(j,0,m)
            printf("%d ",dp[i][j]);
            printf("\n");
        }
    }
}
