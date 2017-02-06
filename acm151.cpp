#include<stdio.h>
#include<iostream>
#include <cmath>
using namespace std;
#define mod 1000000007
long int a[100000],gcd;

inline long int hcf(long int a, long int b)
{
if (b==0)
return a;
else
return hcf(b,a%b);
}
inline void gcdt(long int v,int i,int n)
{
    if(v==1)
        return;
    else{
            for(int j=i+1;j<n;j++)
       {

     gcd=(gcd*hcf(v,a[j])%mod);
     gcdt(a[j],j,n);

       }
    }
}

int main(){
long int t,n,k,i,j;
cin>>t;
while(t--){
cin>>n;
gcd=1;
for(i=0;i<n;i++)
{

scanf("%lld",&a[i]);
}
for(i=0;i<n;i++)
{
    gcd=(gcd*a[i])%mod;
    if(a[i]==1)
        continue;

    gcdt(a[i],i,n);
}
printf("%ld\n",gcd);
}
}
