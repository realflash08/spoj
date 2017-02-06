#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long a[2000000],b[2000000];
int main()
{
    long long t,n,ar[200],p1,p2,c=0,s=0;
    p1=0;
    p2=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        for(int k=0;k<n;k++)
        a[p1++]=ar[i]*ar[j]+ar[k];

      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        for(int k=0;k<n;k++)
        {if(ar[k]==0)
              continue;
            b[p2++]=ar[k]*(ar[j]+ar[i]);
            }
sort(a,a+p1);
sort(b,b+p2);
/*for(int i=0;i<p1;i++)
    cout<<a[i]<<" ";
cout<<"\n";
for(int i=0;i<p2;i++)
    cout<<b[i]<<" ";
cout<<"\n";*/
int pntr2=0;
    for(int i=0;i<p1;)
    {
        int c1=1,c2=0;
        while(i<p1-1&&a[i]==a[i+1])
        {
            i++;
            c1++;
        }
        //cout<<c1<<"\n";
        while(pntr2<p2&&b[pntr2]!=a[i]&&b[pntr2]<a[i])
        pntr2++;
        while(pntr2<p2&&b[pntr2]==a[i])
        {
            c2++;
            pntr2++;
        }
        //cout<<c2<<"\n";
        s+=(c1*c2);
   i++;
}
 cout<<s<<"\n";
}




