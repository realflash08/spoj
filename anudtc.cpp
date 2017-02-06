#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,max,p,c,f,k,a[104],p2;
           scanf("%d",&t);
    while(t--)
    {
        f=1,c=0;
           scanf("%d",&n);
              scanf("%d",&a[0]);
        max=a[0];
        p=0;
     for(int i=1;i<n;i++)
     {
                 scanf("%d",&a[i]);
        if(a[i]!=a[i-1])
            f=0;

            if(a[i]>max)
        {
            max=a[i];
            p=i;
        }
     }

     if(f==1)
        cout<<c<<"\n";
     else
        {

            re:
            c++;
            p2=p;
            max=k;
            f=1;
                   for(int i=0;i<n;i++)
                   {
                       if(i!=p)
                       {
                           a[i]++;
                       }
                          if(a[i]==max+1)
                       {
                           p2=i;
                           k=a[i];
                       }
                       if(a[i]!=a[i-1]&&i>=1)
                       f=0;
                   }
                   for(int i=0;i<n;i++)
                    cout<<a[i]<<"    ";
                   cout<<"\n";


                   if(f==0||k!=max)
                    goto re;
                   cout<<c<<"\n";
        }


    }
}
