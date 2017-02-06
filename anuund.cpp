#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


int main()
{
    int t,n,j;
    long int a[100010],k;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int i;

        int strt=0,en=n-1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                printf("%d ",a[strt++]);
            else
                printf("%d ",a[en--]);

        }
        printf("\n");
    }
}
