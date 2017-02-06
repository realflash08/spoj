#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#include<math.h>


int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        if(k==1)
        {cout<<1<<" ";
        continue;
        }


            if((2*k)>n)
            {cout<<-1<<"\n";
            continue;
            }

        for(int i=1;i<=k;i++)
            cout<<i*2<<" ";
        cout<<"\n";

    }
}
