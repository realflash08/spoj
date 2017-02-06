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

int ql,qr,en,st;
map<ll ,int >mp;

struct node
{
    ll num;
    void merg(node a,node b)
    {
        num=max(a.num,b.num);
    }
};

ll lazy[1700000];
node seg[1700000];

void update(int l,int r,int pos)
{
    if(lazy[pos]!=0)
    {
        seg[pos].num+=lazy[pos];
        if(l!=r){
        lazy[pos*2]+=lazy[pos];
        lazy[pos*2+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(l>en||r<st)
        return ;
    if(l>=st&&r<=en)
    {
        seg[pos].num+=1;
        if(l!=r){
        lazy[pos*2]+=1;
        lazy[pos*2+1]+=1;
        }
        return ;
    }
    int mid=(l+r)/2;
    update(l,mid,pos*2);
    update(mid+1,r,pos*2+1);
    seg[pos].merg(seg[pos*2],seg[pos*2+1]);
}

node range_q(int l,int r,int pos)
{
    node ans;
    if(lazy[pos]!=0)
    {
        seg[pos].num+=lazy[pos];
        if(l!=r){
        lazy[pos*2]+=lazy[pos];
        lazy[pos*2+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(l>qr||r<ql)
    {
        ans.num=0;
    }
    else if(l>=ql&&r<=qr)
    {
        ans=seg[pos];
    }
    else
    {
        int mid=(l+r)/2;
        ans.merg(range_q(l,mid,pos*2),range_q(mid+1,r,pos*2+1));
    }
//    cout<<l<<" "<<r<<" - "<<ans.num<<"\n";
    return ans;
}



    ll a[520020];
    ll inp[2][100200],que[2][100200];
int main()
{
    MEM(lazy,0);
    int n,q,p=0;
    ll x,y;
    si(n);

    rep(i,0,n)
    {
        sl(x);
        sl(y);
        inp[0][i]=x,inp[1][i]=y;
        a[p++]=x;
        a[p++]=y;
    }
    si(q);
    rep(i,0,q)
    {
        sl(x);
        sl(y);
        que[0][i]=x,que[1][i]=y;
        a[p++]=x;
        a[p++]=y;
    }
    sort(a,a+p);
    int cnt=1;
    mp[a[0]]=cnt++;
    rep(i,1,p)
    {
        if(a[i]!=a[i-1])
        {
            mp[a[i]]=cnt++;
        }
    }
    int h=ceil(log2(cnt));
    h=1<<h;

    rep(i,0,2*h+1)
    seg[i].num=0;
    rep(i,0,n)
    {
        st=mp[inp[0][i]],en=mp[inp[1][i]];
        update(1,h,1);
    }
  //  rep(i,1,cnt+h)
    //{
   //     cout<<i<<" - "<<seg[i].num<<"\n";
    //}
    rep(i,0,q)
    {
        ql=mp[que[0][i]],qr=mp[que[1][i]];
   //     cout<<"query - "<<ql<<" to "<<qr<<"\n";
        cout<<range_q(1,h,1).num<<"\n";
    }

}
