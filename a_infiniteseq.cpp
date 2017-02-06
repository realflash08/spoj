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
    ll f=0,a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
            f=1;
    }
    else if(c>0)
    {
        if(b>=a&&(b-a)%c==0)
        f=1;
    }
    else
    {
        if(b<=a&&(a-b)%(-c)==0)
            f=1;
    }

    if(f==1)
        cout<<"YES\n";
    else cout<<"NO\n";


}
