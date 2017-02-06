#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long int a[100000],n,c,t,i;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(i==0)
              {
                  if(a[i+1]!=a[i])
                    c++;
              }
            else if(i==(n-1))
               {
                if(a[i-1]!=a[i])
                c++;
               }
            else
            {
                if(a[i-1]!=a[i]||a[i]!=a[i+1])
                    c++;
            }
        }
        printf("%d\n",c);
    }
}
