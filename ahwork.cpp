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

int nob(int n)
{
    int s=0;
    while(n>0)
    {
        if(n%2==1)
            s++;
        n>>=1;
    }
    return s;
}

int main()
{
    TEST
    {
        string s[100];
        int n,p,ma;
        cin>>n;

        rep(i,0,n)
        cin>>s[i];
        int mi=2*n+3;
        for(int i=0;i<(1<<n);i++)
        {
           string a="0";
            p=i;
            for(int j=0;j<n;j++)
            {
                if(!((1<<j)&i))
                    a=a+s[j];
            }
            if(a.length()!=1)
            {
                a=a.substr(1,a.length()-1);
                string b;
                b=a;

                reverse(a.begin(),a.end());
               // cout<<a<<" "<<b<<"\n";
                if(a==b)
                {
                    mi=min(mi,nob(i));
                }
            }
        }
cout<<mi<<"\n";
    }
}
