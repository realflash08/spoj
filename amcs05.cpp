#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int t,d,x[26],y[26],sum;
    char a[102],b[102];
    cin>>t;
    while(t--)
    {
        sum=0;
        for(int i=0;i<26;i++)
            x[i]=0,y[i]=0;
        scanf("%s %s %d",&a,&b,&d);
        for(int i=0;a[i]!='\0';i++)
            x[a[i]-97]++;
        for(int i=0;b[i]!='\0';i++)
            y[b[i]-97]++;
        for(int i=0;i<26;i++)
            sum+=(abs(x[i]-y[i]));
        if(sum<=d)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    }
