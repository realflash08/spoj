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

int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    TEST
    {
        int ma1=-1,ma2=-1,n,m,x;
        cin>>n>>m;
        rep(i,0,n)
        {
            cin>>x;
            ma1=max(ma1,x);
        }
        rep(i,0,m)
        {
            cin>>x;
            ma2=max(ma2,x);
        }
        if(ma1>=ma2)
            cout<<"Godzilla\n";
        else cout<<"MechaGodzilla\n";
    }
     fclose(stdout);
	return 0;
}
