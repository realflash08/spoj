#include<iostream>
#include<stdio.h>
using namespace std;
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<cstdlib>
#include<algorithm>
int main(){
long long t,n,k,m,f,p2,b[100002];
cin>>t;
while(t--)
{
    cin>>n>>k;
    if(k>(n/2))
        cout<<-1<<"\n";
    else if(k==0)
        {for(int i=1;i<=n;i++)
        cout<<i<<" ";
        cout<<"\n";}
    else
    {
        f=0;
        m=k;

        if((n/k)%2!=0)
            f=1;
        else if((n%k)!=0)
            f=2;
       int p=1,l=0;

       while(p<=n)
       {
           if((p+k)>n){break;}

           p2=p;

      for(int i=p+k;(p+k-(l*k))<=2*k&&p<=n;p++,i++)
      {
            b[p]=i;
            b[i]=p;
  //  cout<<p<<"  "<<b[p]<<"  "<<b[i]<<" "<<i<<"\n";
      }
      p+=k;

l+=2;
    }

    if(f==1||f==2)
    {     long long u;
        if(f==1)
            {u=k;

        for(int i=n-k+1;i<=n;i++)
            b[i]=b[i-u];
        for(int i=(n-u-k+1);i<=(n-k);i++)
            b[i]=(i+k);
            }
            else
            {
                u=(n%k);
                for(int i=n;i>=(n-u);i--)
                   {
                        b[i]=b[i-u];}//cout<<i;}
                for(int i=n-u-k+1;i<=(n-k);i++)
                {b[i]=i+k;//cout<<i<<"  ";
                }
            }
    }
    for(int i=1;i<=n;i++)
        cout<<b[i]<<" ";
        cout<<"\n";
}

}
}
