#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long t,n;
    long long d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=(((n+1)*(n+2))/2)-1;
        cout<<d<<"\n";
    }
}

