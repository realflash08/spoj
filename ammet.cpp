#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


int main()
{
    long long  t,n,a[8],m,c,sum;
    cin>>t;
    while(t--)
    {
         c=0;
         sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>a[i];
 sort(a,a+n);
 int i;
       for(i=n-1;i>=0;i--)
       {
           sum+=a[i];
           c++;
           if(sum>=m)
            break;
      }
      if(i<0)
        cout << -1 << "\n";
      else
      printf("%d\n",c);

    }
}





