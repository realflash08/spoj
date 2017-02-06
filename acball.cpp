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

    int n;
    TEST
    {
        string x,y;
        char s[100004];
        char b='B',w='W';
        cin>>x>>y;

        n=x.length();
        for(int i=0;i<n;i++)
        {
            if(x[i]==y[i])
            {
                if(x[i]=='W')
                    s[i]=b;
                else s[i]=w;
            }
            else
            {
                s[i]=b;
            }
        }
        s[n]='\0';
        cout<<s<<"\n";
    }

}
