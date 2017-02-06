#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()
{
    long long x,t,n,f,a[100003],sum,k,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);

    long long l=0,u=a[n-1],i;
sum=c;
    while(l<=u)
    {
        c=sum;
          i=(l+u)/2;
          f=1;
          x=0;
          int j=1;
          while(c--){
              while(a[j]-a[x]<i)
                j++;
              x=j;
              if(j>=n)
              break;
          }

          if(c>0)
            f=0;
            else ans=i;
          //  cout<<"i--- "<<i<<"  ans---- "<<ans<<"\n";
          if(f==1)
            l=i+1;
          else u=i-1;

              }
cout<<ans<<"\n";
    }
    }
