#include<stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int a[2][26],t,n,k,l,f;
    char b[50003];
    scanf("%d",&t);
    while(t--)
    {
        f=0;
        for(int i=0;i<26;i++)
        {a[0][i]=0;
        a[1][i]=i;
        }

        scanf("%d %d",&n,&k);
        scanf("%s",&b);
        for(int i=0;i<n;i++)
        {
            a[0][b[i]-97]++;
        }
        for(int i=0;i<26;i++)
            cout<<a[0][i]<<"  ";
         for(int i=0;i<25;i++)
         {
             for(int j=0;j<25-i;j++)
             if(a[0][j]<a[0][j+1])
                {
                    int t=a[0][j];
                     a[0][j]=a[0][j+1];
                     a[0][j+1]=t;
                     a[1][j]=t;
                     a[1][j]=a[1][j+1];
                     a[1][j+1]=t;
                }
         }
        for(int i=0;i<26;i++)
            cout<<a[0][i]<<"  ";
     for(int i=0;i<26;i++)
     if(a[0][i]>k)
        {f=1;
        printf("%c",(a[1][i]+97));
        }
        if(f==0)
            printf("NONE");
        printf("\n");


}
return 0;        }
