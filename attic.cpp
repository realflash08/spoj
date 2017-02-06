#include<iostream>
#include<stdio.h>
using namespace std;
#include<string.h>

int main()
{
    long int t,n,l,d,cas;
    char a[1000000];
    scanf("%d",&cas);
    while(cas--)
    {
        t=0;
        d=0;
        l=1;

        scanf("%s",&a);

        for(long int i=0;a[i]!='\0';i++)
        {
            t=0;
            if(a[i+1]=='.')
            {
                    while(a[i+1]=='.')
            {
                i++;
                t++;
            }

            if(t>l)
            {
                d++;
                l=t;
            }
            }
        }
        cout<<d<<"\n";
    }
}
