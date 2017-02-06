#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,k,x,p,i,n,r,j;
    int a[11];
    cin>>t;
    while(t--)
    {
        n=0,r=0;
        for(int i=0;i<11;i++)
            scanf(" %d",&a[i]);
            cin>>x;
             for(int i=1;i<11;i++)
        {
          k=a[i];
          for(j=i-1;j>=0&&a[j]<k;j--)
                a[j+1]=a[j];
          a[j+1]=k;
        }
        p=a[x-1];
        for( i=x-1;a[i]==p&&i>=0;i--)
        {r++;n++;}
        for( i=x;a[i]==p&&i<11;i++)
             n++;


        x=1;
       for(j=n;j>(n-r);j--)
       {
           x*=j;
       }
       for(j=r;j>=1;j--)
        x/=j;

        cout<<x<<"\n";
    }
}


