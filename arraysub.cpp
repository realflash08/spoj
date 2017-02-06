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
#include<deque>
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
int n,a[1000030],k;
int main()
{

    deque<int > dq;

    scand(n);
    rep(i,0,n)
    scand(a[i]);
    scand(k);
    for(int i=0;i<k;i++)
    {
        if(i==0)
            dq.push_back(i);
        else
        {
           // cout<<"back  --"<<dq.back()<<" ";
            while(!dq.empty()&&a[dq.back()]<a[i])
            dq.pop_back();
            dq.push_back(i);


        }
    }
     cout<<a[dq.front()]<<" ";
    for(int i=k;i<n;i++)
    {
      while(!dq.empty()&&a[dq.back()]<a[i])
           dq.pop_back();
        dq.push_back(i);
        while(dq.front()<=i-k)
            dq.pop_front();
        cout<<a[dq.front()]<<" ";
    }

}


