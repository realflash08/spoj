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
#define mo 1000000007
int vis[100002]={0};

int main()
{
    ll t,l,r,c,s,one;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>l>>r;
        if(r-l<=4)
        {
            while(l<=r)
            {
                if(l%4==0)
                    c=l;
                else if((l-1)%4==0)
                    c=1;
                else if((l-2)%4==0)
                    c=l+1;
                else c=0;

                s^=c;
                l++;
            }
        }
        else{
        while(l%4!=0)
        {
            if(l%4==0)
                    c=l;
                else if((l-1)%4==0)
                    c=1;
                else if((l-2)%4==0)
                    c=l+1;
                else c=0;

                s^=c;
                l++;
        }
        //cout<<"         "<<l<<"\n";
        while((r+1)%4!=0)
        {
           if(r%4==0)
                    c=r;
                else if((r-1)%4==0)
                    c=1;
                else if((r-2)%4==0)
                    c=r+1;
                else c=0;

                s^=c;
                r--;
        }
        //cout<<"           "<<r<<"\n";
        one =(r-l+1)/4;
        if(one%2==1)
        {
            s^=2;
        }
        }
        int ans=0;
        while(s>0)
        {
            if(s%2==1)
                ans++;
            s>>=1;
        }
        if(ans%2==1)
            cout<<"2k12\n";
        else
            cout<<"2k13\n";
        //cout<<ans<<"\n";

    }

}
