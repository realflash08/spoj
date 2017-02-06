#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char a[200600];
    long long l,m,b[1000],q,n,num=0,c;
    scanf("%s",&a);
    n=strlen(a);
    cin>>q;
    while(q--)
    {
        c=0;
        num=0;
        cin>>m>>l;

        for(int i=0;i<n;i++)
            {num=0;        long long s=1;
            for(int j=i;j<n;j++)
        {
           // cout<<i<<"  "<<j<<"\n";


                num=(num*10+(int)(a[j]-48))%m;
                // cout<<"    #"<<num<<"  \n";
                if(num==l)
                    c=(c+1);
        }
            }
        cout<<c<<"\n";
    }
}
