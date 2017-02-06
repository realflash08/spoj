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
#define MEM(a,b) memset(a,(b),sizeof(a))
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define sl(x) scanf("%lld",&x)
#define ff first
#define ss second
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();
int n,m,a[1002][1033];
int s1[1002][1002];
int s2[1002][1002];
int s3[1002][1002];
int s4[1002][1002];
int ind[1002][1002][4];

int main()
{
    TEST
    {
        si(n);
        si(m);
        rep(i,0,n)
        rep(j,0,m)
        si(a[i][j]);
        // right
        rep(i,0,n)
        {
            s1[i][0]=a[i][0];
            rep(j,1,m)
            s1[i][j]=s1[i][j-1]+a[i][j];
        }
        //left
        rep(i,0,n)
        {
            s2[i][n-1]=a[i][n-1];
            for(int j=n-2;j>=0;j--)
            s2[i][j]=s2[i][j+1]+a[i][j];
        }
        // top
        rep(i,0,m)
        {
            s3[n-1][i]=a[n-1][i];
            for(int j=n-2;j>=0;j--)
            s3[j][i]=s3[j+1][i]+a[j][i];
        }
        //down
        rep(i,0,m)
        {
            s4[0][i]=a[0][i];
            rep(j,1,m)
            s4[j][i]=s4[j-1][i]+a[j][i];
        }


    }
}
