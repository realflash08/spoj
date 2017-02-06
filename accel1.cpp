#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int a[27],t,n,k,l,f;
    char b[100003];
    cin>>t;
    while(t--)
    {
        f=0;
        for(int i=0;i<27;i++)
        a[i]=0;

        scanf("%d %d",&n,&k);
        scanf("%s",&b);
        for(int i=0;i<n;i++)
        {
            a[b[i]-97]++;
        }

        l=n;
        while(l>k)
            {

        for(int i=0;i<n;i++)
            if(a[i]==l)
                {
                    f=1;
            printf("%c",(i+97));
            }

        l--;
            }



            if(f==0)
                cout<<"NONE";
            cout<<"\n";
    }

    return 0;
    }
