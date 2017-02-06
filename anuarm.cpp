#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,m,a[100000];
    int max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
          if((a[0]-i)>=0)
            max=a[0]-i;
          else
            max=i-a[0];
          for(int j=1;j<m;j++)
            {if((a[j]-i)>=0)
              if((a[j]-i)>max)
              max =a[j]-i;
           if((a[j]-i)<0)
              if((i-a[j])>max)
              max =i-a[j];
            }
          printf("%d ",max);
        }
        printf("\n");

    }
}



