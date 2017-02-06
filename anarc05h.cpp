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
#include<set>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)

int dig[50],n;
string s;

int blabla(int pos,int pre)
{
    int sum=0,r=0;
    if(pos==n)
        return 1;
    for(int i=pos;i<n;i++)
    {
        sum+=dig[i];
        if(sum>=pre)
            r+=blabla(i+1,sum);
    }
    cout<<pos<<" "<<pre<<" "<<r<<"\n";
    return r;
}

int main()
{
    int t=1;
   cin>>s;
    while(s[0]!='b')
    {

        n=s.length();
        for(int i=0;i<n;i++)
            dig[i]=s[i]-'0';
        cout<<t<<". "<<blabla(0,0)<<"\n";
     t++;   cin>>s;
    }
}
