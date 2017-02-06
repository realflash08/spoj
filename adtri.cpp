#include<iostream>
#include<stdio.h>
using namespace std;
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[9999999],b[9999999];
int main()
{
    long int t=0,m,n,f,s,x,y,l;
a[2]=0;
for(long int j=2*2;j<=5000090;j+=2)
                a[j]=1;


    for(long int i=3;i<=5000090;i+=2)
    {
        if(a[i]==0)
        {

            for(long int j=2*i;j<=5000090;j+=i)
                a[j]=1;
        }
    }
    /*
    /*
for(int i=3;i<=5000090;i+=2)
{if(a[i]==0&&(i-1)%4==0)
    {b[t++]=i;
    //cout<<i<<"     #\n";
    }
//cout<<i<<"   "<<a[i]<<"\n";
}*/
for(long long k=5;k<5000043;k+=4)
{
    if(a[k]==0&&(k-1)%4==0)
    {
        b[k]=1;
        for(long long m=2*k;m<=5000043;m+=k)
            b[m]=1;
    }
}
   cin>>t;
    while(t--){
            int f1=0,f2=0;
       scanf("%ld",&x);
        y=x;
        if(x<=1)
         printf("NO\n");
        else{

       /*if(a[x]==0){
            if((x-1)%4==0)
        f2=1;
       }
       else
       {
           for(int i=0;b[i]<=x;i++)
           {
               if(x%b[i]==0)
               {
                   f2=1;
                   break;
               }
           }
       }
 */
 if(b[x]==1)
 f2=1;
        if(f2==1)
            printf("YES\n");
        else
           printf("NO\n");

    }
    }
}

