#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    long long int n,r;
    char c;
    cin>>t;
    while(t--)
    {
            scanf("%lld\n",&n);
           do
        {
            c=getchar();
        }
        while(c!='\n');
           r= ((n)*(n-1))/2;
        cout<<r<<"\n";
    }
}
