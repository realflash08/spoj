#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main()
{int t,n,m,x,y;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&n,&m);
       while(m--)
       scanf("%d %d",&x,&y);
       if(n%2==0)
        printf("Alex\n");
       else
        printf("Artur\n");

   }

    return 0;
}
