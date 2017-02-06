// by realflash
#include<bits/stdc++.h>
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
int n,m,a[1032][1033];
int s1[1032][1032];
int s2[1032][1032];
int s3[1032][1032];
int s4[1032][1032];




int main()
{
    TEST
    {

        si(n);
        si(m);
        rep(i,0,n)
        rep(j,0,m)
        {
            si(a[i][j]);
            a[i][j]=(a[i][j]);
        }

        int h1,h2,h3,h4;
        // right
        rep(i,0,n)
        {
            s1[i][0]=min(a[i][0],0);
            rep(j,1,m)
            s1[i][j]=min(s1[i][j-1]+a[i][j],0);
        }


        //left
        rep(i,0,n)
        {
            s2[i][n-1]=min(0,a[i][n-1]);
            for(int j=m-2;j>=0;j--)
            s2[i][j]=min(0,s2[i][j+1]+a[i][j]);

        }
        // top

        rep(i,0,m)
        {
            s3[n-1][i]=min(0,a[n-1][i]);
            for(int j=n-2;j>=0;j--)
            s3[j][i]=min(0,s3[j+1][i]+a[j][i]);
        }
        //down
        rep(i,0,m)
        {
            s4[0][i]=min(0,a[0][i]);
            rep(j,1,n)
            s4[j][i]=min(0,s4[j-1][i]+a[j][i]);
        }
        ll ans=INT_MAX;
        rep(i,0,n)
        rep(j,0,m)
        {
            ll sum=a[i][j];
            if(j>0)
                sum+=s1[i][j-1];
            if(j<m-1)
                sum+=s2[i][j+1];
            if(i<n-1)
                sum+=s3[i+1][j];
            if(i>0)
                sum+=s4[i-1][j];
            ans=min(ans,sum);
        }
        cout<<(ans)<<"\n";



    }
}
