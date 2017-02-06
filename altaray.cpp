#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    long long t,a[120001],b[120001],s,c,p,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            if(c>0)
                a[i]=1;
            else
                a[i]=-1;
        }
        b[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            b[i]=1;
            if(a[i]!=a[i+1])
                b[i]+=b[i+1];
        }
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }

}
