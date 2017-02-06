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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)


ll t,n,c,ans=0;
int main()
{
    string s;
ll aa=0,bb=0,cc=0;

map <pii,int >v;
map <pii,int >:: iterator it;
        ans=0;
        cin>>s;
      //  cin>>x;
        ll l=s.length();
        v.insert(mk(mk(0,0),1));
rep(i,0,l)
{
    aa+=(s[i]=='A');
    bb+=(s[i]=='B');
    cc+=(s[i]=='C');
     pii p1=mk(bb-aa,cc-aa);

            if(v.find(p1)!=v.end())
                v[p1]++;
            else
                v.insert(mk(p1,1));
}
        for(it=v.begin();it!=v.end();it++)
        {
            ll x=it->second;
            //cout<<p2.first<<" "<<p2.second<<" - "<<x<<"\n";
            x=x*(x-1);
            x/=2;
            ans+=x;
        }
        cout<<ans<<"\n";
}
