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
#define prline(x) printf("%d\n",x)
int MAX=numeric_limits<int>::max();

int ql,qr,en,st;
int lazy[500004];
struct node
{
    int le,ri;
    void merg(node a,node b)
    {
        le=0,ri=0;
        if(a.ri>b.le)
        {
            ri=(a.ri-b.le);
        }
        else
        {
            le+=(b.le-a.ri);
        }
        le+=a.le;
        ri+=b.ri;
    }
    void change()
    {
        int tt=ri;
        ri=le;
        le=tt;
    }
};
node seg[500004];

void update(int l,int r,int pos,int ind)
{
    if(l==r)
    {
        seg[pos].change();
        return;
    }
    int mid=(l+r)/2;
    if(ind>=l&&ind<=mid)
        update(l,mid,pos*2,ind);
    else if(ind<=r&&ind>=mid+1)
        update(mid+1,r,pos*2+1,ind);
    seg[pos].merg(seg[pos*2],seg[pos*2+1]);
}

node range_q(int l,int r,int pos)
{
    node ans;
    if(l>qr||r<ql)
    {
        ans.le=0;
        ans.ri=0;
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
    //cout<<pos<<"  :  "<<l<<"\t"<<r<<" = "<<ans.le<<" "<<ans.ri<<"\n";
    return ans;
}

int main()
{
    int hh=1;
    int n,q,x,t=10;
    while(t--){
    scand(n);
    string s;
    cin>>s;
    scand(q);
    int h=ceil(log2(n));
    h=1<<h;
    for(int i=h;i<n+h;i++)
    {
        if(s[i-h]=='(')
        {
          //  cout<<"( -- "<<i<<"\n";
            seg[i].ri=1;
            seg[i].le=0;
        }
        else
        {
         //   cout<<") -- "<<i<<"\n";
            seg[i].ri=0;
            seg[i].le=1;
        }
    }
    for(int i=h+n;i<2*h;i++)
        seg[i].le=0,seg[i].ri=0;
    for(int i=h-1;i>0;i--)
        seg[i].merg(seg[i*2],seg[i*2+1]);

        printf("Test %d:\n",hh);
        hh++;
    while(q--)
    {
        scand(x);
        if(x==0)
        {
            ql=1,qr=n;
            node temp=range_q(1,h,1);
            if(temp.le==0&&temp.ri==0)
                printf("YES\n");
            else printf("NO\n");
        }
        else
        {
            update(1,h,1,x);
        }
    }
    }
}
