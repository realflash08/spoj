#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mo 100000007
long long arr[100004];
int main()
{

    int t;
    long long n,k,i,p,s;
    cin>>t;
     while(t--)
   {
       s=0;
       cin>>n>>k;
       for(int i=0;i<n;i++)
        cin>>arr[i];
sort(arr,arr+n);
       for(int i=0;i<n-1;i++)
       {
long long  ind=n,x=arr[i]+k;
   int first = i+1;
   int last = n - 1;
   int middle = (first+last)/2;

   while (first <= last) {

      if (arr[middle] <x)
         first = middle + 1;


      else if (arr[middle] == x)
        {
            ind =middle;
            while(arr[ind]==x)
                ind--;
            ind++;
         break;
      }
      else
         {
             ind =middle;
             last = middle - 1;
         }
middle = (first+last)/2;
   }
   s=(s+(n-ind))%mo;

       }
       cout<<s<<"\n";

}   }

