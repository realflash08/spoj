#include<iostream>
#include<stdio.h>
using namespace std;
#include<math.h>

int main()
{
  int t,n,x,mi=0,s=0;
  int a[109];
  cin>>t;
  while(t--)
  {
      mi=s=0;
      cin>>n>>x;
      for(int i=0;i<n;i++)
        cin>>a[i];
      mi =a[0];
      for(int i=0;i<n;i++)
      {
          s+=a[i];
          if(mi>a[i])
            mi=a[i];
      }
      if(s%x==0)
        cout<<s/x<<"\n";
      else
        {
            if(s<x)
               cout<<-1<<"\n";
            else if(mi<=s%x)
                cout<<-1<<"\n";
            else
                cout<<s/x<<"\n";


        }

  }
}
