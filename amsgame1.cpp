//long method
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,f=0;
    long int a[1020];
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        re:
        for(int i=0;i<n&&f==0;i++)
        {
            f=1;
            for(int j=0;j<n;j++)
            {
                if(i!=j&&a[i]!=a[j])
                {
                    a[i]=(a[i]>a[j])?(a[i]-a[j]):a[i];
                      a[j]=(a[j]>a[i])?(a[j]-a[i]):a[j];
                      if(a[i]!=a[j])
                        f=0;
                }
            }
        }
        if(f==0)
            goto re;
        cout<<a[0]<<"\n";
    }
}
