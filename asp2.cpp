#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long t,n,a[1000003],f,p,l;
int main()
{

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        f=0,p=0;
        while(p<n)
        {
            if(a[p]<a[p-1]&&p>0)
            {
                f=1;
                break;

            }
            if(p<n-1)
            {
                if(a[p]>a[p+1])
                {
                    l=a[p];
                    a[p]=a[p+1];
                    a[p+1]=l;
                    p=p+1;
                }
            }
            p++;
        }
        if(f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
