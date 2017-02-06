#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<cmath>


int main()
{
    long long n,t,x,a[20];
    double aa,b,k;
 long long  fib[90];
        int i;

        fib[0] = 1;
        fib[1] = 2;

        for(i = 2; i < 90; i++)
                fib[i] = fib[i-1] + fib[i-2];



  // for(int i=0;i<90;i++)
    //cout<<fib[i]<<"        "<<i+1<<"\n";


    cin>>t;
    while(t--)
    {
        cin>>n;

     for(int i=0;i<90;i++)
     {
         if(n<fib[i])
         {
             cout<<i<<"\n";
             break;
         }
     }

          /* aa=log(ceil(sqrt(5)*n));

             b=log((1+sqrt(5))/2);
             k=aa/b;
            x=k;
           cout<<x-1<<"\n";
      //  }*/
    }
}

