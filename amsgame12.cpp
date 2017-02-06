#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{
    if(a>=b)
    {
        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);
    }
    else
        return gcd(b,a);
}

int main()
{
    int t,n;
    long int a[1020],com;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        com=a[0];

        for(int i=1;i<n;i++)
          com=(gcd(com,a[i]));


        cout<<com<<"\n";
    }
}


