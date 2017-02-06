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
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int main()
{
   TEST{
       ll n,c,k,m;
       sl(n);
       sl(c);
        if(n==1)
            cout<<"Yes\n";
        else
        {
            int f=0;
            if(n%2==0)
            {
                if((c*2)%n==0)
                {
                    k=(2*c)/n;
                    if(k%2!=0)
                    {
                        if(k>(n-1))
                            f=1;
                    }
                    else
                    {
                        if(k>2*(n-1))
                            f=1;
                    }
                }
            }
            else
            {
                if(c%n==0)
                {
                    k=c/n;
                    m=(n-1)/2;
                    if(k>m)
                        f=1;
                }
            }
            if(f==1)
                cout<<"Yes\n";
            else cout<<"No\n";
        }
   }
}
