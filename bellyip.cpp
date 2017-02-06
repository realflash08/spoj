#include<iostream>
#include<stdio.h>
using namespace std;
#include<vector>
#include<string.h>
#define mo 1000000000

int main()
{
    long int n,i=0,coun=0,f=0,plock=0;
    float x,pre,y;
    scanf("%d",&n);

    scanf("%f %f",&x,&y);
    pre=y;
    n--;


    while(n--)
    {

        scanf("%f %f",&x,&y);

        if(y==pre)
            f=1;

            pre =y;
            if(plock==0)
            {if(y>0)
                coun++;
                plock=1;
            }
            if(y<0)
                plock=0;



    }

    if(f==1)
    printf("square-wave\n");
    else
        printf("sine-wave\n");
    printf("%d",coun);
}


