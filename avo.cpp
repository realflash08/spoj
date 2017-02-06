#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 long long a[2000000];

int main()
{
    long long n,k,f,ma,x,t,i,j;
 for(long long i=0;i<1000002;i++)
        a[i]=i*i*i;

    cin>>t;
    while(t--)
    {
        f=0;
        scanf("%lld",&n);
        long long l=1;
        long long r=1000000;
         while(l<=r)
        {
            if(a[l]+a[r]>n)
                r--;
            else if(a[l]+a[r]<n)
                l++;
            else
            {
                f=1;
                break;
            }
        }


        if(f==1)
            printf("Yes\n");
        else printf("No\n");

    }

}
