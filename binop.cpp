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
#define scand(x) scanf("%d",&x)
#define scanlld(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int main()
{
    TEST
    {
        string a,b;
        ll n,x1=0,x2=0,x3=0,x4=0,ans=-1;
        cin>>a>>b;
        n=a.length();
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0'&&b[i]=='0')
                x1++;
            if(a[i]=='0'&&b[i]=='1')
                x2++;
            if(a[i]=='1'&&b[i]=='0')
                x3++;
            if(a[i]=='1'&&b[i]=='1')
                x4++;
        }

        if(x2>0&&x3>0)
        {
                ans=max(x2,x3);
        }
        else
            if(x2>0&&x4>0)
                ans=x2;
        else if(x3>0&&x1>0)
                ans=x3;
        if(x1+x4==n)
            ans=0;
        if(ans==-1)
            printf("Unlucky Chef\n");
        else printf("Lucky Chef\n%lld\n",ans);



    }
}
