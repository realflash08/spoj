#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    long long a[100002],t,n,s,k;

        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        k=0;
        for(int i=1;i<=n/2;i++)
        {
            k=(k+a[i])%10;
            if(i*5<=n)
                a[i*5]+=a[i];
            else if(i*3<=n)
                a[i*3]+=a[i];
            else if(2*i<=n)
                a[i*2]+=a[i];
            a[i]=0;
        }
        if(k%2==0)
            cout<<"B";
        else
            cout<<"A";


}
