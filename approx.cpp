#include<iostream>
#include<stdio.h>
using namespace std;
#include<string.h>

int main()
{
   long int t,k,n=103993,d=33102;
   cin>>t;

  while(t--)
        {
            n=103993,d=33102;

               cin>>k;

                cout<<3;
                  if(k!=0)
                  {
                      cout<<'.';
                      while(k--)
                      {
                          n=(n%d)*10;

                          cout<<n/d;
                      }
                }
                cout<<"\n";
}
}
