#include<iostream>
#include<stdio.h>
using namespace std;
#include<string.h>
int main()
{
    long int t;
    long long a,b,c;
    scanf("%ld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld %lld",&a,&b);
        while(a!=b)
        {
            if(a>b)
                a=a/2;
            else
                b=b/2;
                c++;
        }
        printf("%lld\n",c);
    }
}
