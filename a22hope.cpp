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
ll n,m,a[1032][1033];
ll s1[1032][1032];
ll s2[1032][1032];
ll s3[1032][1032];
ll s4[1032][1032];

int main()
{
   // cout<<INT_MIN<<" "<<LONG_MIN<<"\n";
  //  ios_base::sync_with_stdio(0);cin.tie(0);
    TEST
    {
        ll z=0;
        sl(n);
        sl(m);
        rep(i,0,n)
        rep(j,0,m)
        {
            sl(a[i][j]);
            a[i][j]=(-a[i][j]);
        }
        // right
        rep(i,0,n)
        {
            s1[i][0]=max(a[i][0],z);
            rep(j,1,m)
            s1[i][j]=max(s1[i][j-1]+a[i][j],z);
        }
        //left
        rep(i,0,n)
        {
            s2[i][m-1]=max(z,a[i][m-1]);
            for(int j=m-2;j>=0;j--)
            s2[i][j]=max(z,s2[i][j+1]+a[i][j]);
        }
        // top
        rep(i,0,m)
        {
            s3[n-1][i]=max(z,a[n-1][i]);
            for(int j=n-2;j>=0;j--)
            s3[j][i]=max(z,s3[j+1][i]+a[j][i]);
        }
        //down
        rep(i,0,m)
        {
            s4[0][i]=max(z,a[0][i]);
            rep(j,1,n)
            s4[j][i]=max(z,s4[j-1][i]+a[j][i]);
        }
        ll ans=LONG_MIN;
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
            ans=max(ans,sum);
        }
        cout<<(-ans)<<"\n";
    }
}
