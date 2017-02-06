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

int main()
{
    int n1;
    cin>>n1;

    while(n1!=0)
    {
        int  a[30000],b[30000],s1[30000],dp[30000];
    int  s2[100000],n2,x[100000],p,i1[30000],i2[30000];
        memset(dp,0,sizeof(dp));
        cin>>a[0];
        s1[0]=a[0];
        rep(i,1,n1)
        {
            cin>>a[i];
            s1[i]=s1[i-1]+a[i];
        }
        cin>>n2;
        cin>>b[0];
        s2[0]=b[0];
        rep(i,1,n2)
        {
            cin>>b[i];
            s2[i]=s2[i-1]+b[i];
        }
        p=0;
        rep(i,0,n1)
        {
            int l=0,u=n2-1,mid;
            while(l<=u)
            {
                mid=(l+u)/2;
                if(b[mid]==a[i])
                {
                    i1[p]=i;
                    i2[p]=mid;
                    x[p++]=a[i];
                  //  cout<<p-1<<" "<<a[i]<<"\n";
                    break;
                }
                if(b[mid]>a[i])
                {
                    u=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        rep(i,0,p)
        {
            if(i==0)
            {
                dp[0]=max(s1[i1[i]],s2[i2[i]]);
            }
            else
            {
                int l1=dp[i-1]+s1[i1[i]]-s1[i1[i-1]];
                int l2=dp[i-1]+s2[i2[i]]-s2[i2[i-1]];
                dp[i]=max(l1,l2);
            }
           // cout<<"\t\t\t"<<dp[i]<<"\n";
        }
        if(p==0)
        {
            dp[p]=max(s1[n1-1],s2[n2-1]);
        }
        else
        {
            int l1=dp[p-1]+s1[n1-1]-s1[i1[p-1]];
                int l2=dp[p-1]+s2[n2-1]-s2[i2[p-1]];
                dp[p]=max(l1,l2);
        }
        cout<<dp[p]<<"\n";
cin>>n1;
    }
}
