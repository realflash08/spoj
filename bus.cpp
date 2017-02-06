#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int t,n,k,m,s,p,d,q,ma=0,a[9],sma;
    cin>>t;
    whille(t--)
    {
        for(int i=0;i<9;i++)
            a[i]=0;
        ma=0,sma=0;
        cin>>n>>m>>k;
        while(k--)
        {
            cin>>s>>d>>p>>q;
            if((p*q)>sma)
                sma=p*q;
        }

    }
