#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int p,n,m,mi,ma;
int vedika(int n)
{
    return (n>=0)?n:-n;
}



int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
		mi = n;
		ma = -1;
		while(m--)
        {
            scanf(" %d",&p);
            if(p>ma)
                ma=p;
            if(p<mi)
                mi=p;

        }
        for(int i=0;i<n;i++)
        {
            a=vedika(mi-i);
            b=vedika(ma-i);
            a=(a>b)?a:b;
            cout<<a<<" ";
        }
        cout<<"\n";

    }
}
