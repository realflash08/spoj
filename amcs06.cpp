#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mo 1000000007
#define ll long long

long long n,l,d,a[2][100002];

int pus(ll p)
{
    ll to=0,b[1000000];
    for(ll i=p;(a[0][i]-a[0][p])<=d&&i<l;i++)
    {
        b[]

    }
}


int main()
{
    int t;
    long long n,l,d,a[2][100002];
    cin>>t;
    while(t--)
    {
        int f=1;
        cin>>n>>l>>d;
        a[0][0]=0;
        for(ll i=1;i<=n;i++)
            {scanf("%lld %lld",&a[0][i],&a[1][i]);
            if((a[0][i]-a[0][i-1])>d)
                f=0;
            }
        if(f==0)
            cout<<"NO\n";
        else
        {
            cout<<"YES ";

        }


    }
