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
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

double m[100300],in[130003],x[103000],y[103000];

int main()
{
    TEST
    {
        double m[100300],y[130003],;
        int  n;
    cin>>n;
        rep(i,0,n)
        {
            cin>>x[i]>>y[i];
        }
        int p=0;
        rep(i,0,n-1)
        rep(j,i+1,n)
        {
            if(x[i]-x[j]==0)
            {
                m[p]=MAX;
                in[p]=x[i];
            }
            else
            {
                m[p]=((y[j]-x[j])/(x[j]-x[i]));
                in[p]=y[j]-x[j]*m[p];
            }
            p++;
        }

    }
}
