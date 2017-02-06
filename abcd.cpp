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
int a[100300],b[100200];

void sw(int x,int y)
{
    int g=b[x];
    b[x]=b[y];
    b[y]=g;
}
int main()
{
    int n;
    si(n);
    string s,t;
    cin>>s;

    for(int i=0;i<2*n;i++)
    {
        a[i]=s[i]-64;
    }

    for(int i=0;i<2*n-1;i+=2)
    {
        int x=a[i],y=a[i+1],a1,a2;
    //    cout<<x<<" "<<y<<"\n";
        for(int j=1;j<=4;j++)
        {
            if(j!=x&&j!=y)
            {
                b[i]=j;
                break;
            }
        }
        for(int j=1;j<=4;j++)
        {
            if(j!=x&&j!=y&&j!=b[i])
            {
                b[i+1]=j;
                break;
            }
        }
        if(i>0)
        {
            if(b[i-1]==b[i])
                sw(i+1,i);
        }
    }
    string h[4]={"A","B","C","D"};
    for(int i=0;i<2*n;i++)
    {
      //  cout<<b[i]<<"\n";
        t+=(b[i]-1+'A');
    }
t[2*n]='\0';
    cout<<t<<"\n";


}
