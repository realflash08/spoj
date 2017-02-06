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

string str;
int ql,qr;
struct node
{
    int ind;
    void merg(node a,node b)
    {
        if(a.ind==-1&&b.ind==-1)
        {
            ind=-1;
        }
        else if(a.ind==-1)
        {
            ind=b.ind;
        }
        else if(b.ind==-1)
        {
            ind=a.ind;
        }
        else{
        if(str[a.ind]<=str[b.ind])
        {
            ind=a.ind;
        }
        else
        {
            ind=b.ind;
        }
        }
    }
};
node seg[500003];
node range_q(int l,int r,int pos)
{
    node ans;
    if(l>qr||r<ql)
    {
        ans.ind=-1;
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
   // cout<<pos<<" - "<<l<<" "<<r<<" "<<ans.ind<<"\n";
    return ans;
}


int main()
{
    TEST
    {
        int n,k;
        char s[100003];
        cin>>str;
        scand(k);
        n=str.length();
        int h=ceil(log2(n));
        h=1<<h;
        for(int i=h;i<h+n;i++)
        {
            seg[i].ind=(i-h);
        }
        for(int i=n+h;i<=2*h;i++)
            seg[i].ind=-1;
        for(int i=h-1;i>0;i--)
            seg[i].merg(seg[i*2],seg[i*2+1]);

        //for(int i=0;i<h+n;i++)
      //          cout<<i<<"  "<<seg[i].ind<<"\n";


        int limit=n-k,pre=0;

      //  ql=2,qr=2;
       // cout<<range_q(1,h,1).ind<<"\n\n";


        for(int i=0;i<k;i++)
        {
            ql=pre+1,qr=limit+1;
            int p=range_q(1,h,1).ind;
            s[i]=str[p];
            limit++;
            pre=p+1;
        }
s[k]='\0';
cout<<s<<"\n";
    }
}
