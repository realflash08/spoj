#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	int t;long long int n;
	scanf("%d\n",&t);
	while(t--){
	    scanf("%lld\n",&n);
	    long long int a[n],b[n],i,j,min[n],minp,mini,temp,c=0,flag;
	    for(i=0;i<n;i++)
	        scanf("%lld\n",&a[i]);
	  for(i=0;i<n;i++)
	        scanf("%lld\n",&b[i]);
	  flag=1;
	  while(flag==1){flag=0;
	  minp=100000;mini=0;
	  for(i=0;i<n;i++)
	  {
	      for(j=0;j<n;j++){
	          if(a[i]==b[j]){
	            min[i]=j-i;
	            if(abs(min[i])>abs(mini)){
	                minp=i;
	                mini=min[i];
	            }
	            }
	      }
	  }
	  for(i=0;i<n;i++)
	  {
	      if(min[i]==0)
	        continue;
	       else{
	           flag=1;
	           break;
	       }
	  }
	  if(mini>0){
	      for(i=minp;a[i]!=b[i];i++){
	          temp=a[i];
	          a[i]=a[i+1];
	          a[i+1]=temp;
	          c++;
	      }
	  }
	  if(mini<0){
	       for(i=minp;a[i]!=b[i];i--){
	          temp=a[i];
	          a[i]=a[i-1];
	          a[i-1]=temp;
	          c++;
	      }
	  }}
	  printf("%lld\n",c);


	}
	return 0;
}
