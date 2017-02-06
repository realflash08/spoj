#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define mo 1000000007

int n,t,q,x,y,c,f;
    long long a[100003],add[100003],mul[2][100003],v,sum;
inline void doadd()
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=(sum+add[i])%mo;
        a[i]=(a[i]+sum)%mo;
        add[i]=0;
    }
}



inline void domul()
{
    long long sum=1;
    for(int i=0;i<n;i++)
    {
        if(mul[0][i]>0)
        sum=(sum*mul[0][i])%mo;
        if(mul[1][i]>0)
        sum=(sum/mul[1][i])%mo;
        if(sum!=0)
        a[i]=(a[i]*sum)%mo;
        mul[0][i]=0;
        mul[1][i]=0;
    }
}



int main()
{

    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++)
        scanf(" %lld",&a[i]);
    while(q--)
    {
        scanf("%d %d %d",&c,&x,&y);
        x--;
        y--;
        if(c==1)
        {
            cin>>v;
            if(f==2)
                domul();
            add[x]+=v;
            add[y+1]-=v;
            f=1;
        }
        else if(c==2)
        {
            cin>>v;
            if(f==1)
                doadd();
                if(mul[0][x]!=0)
                    mul[0][x]*=v;
                else
                    mul[0][x]=v;\
             if(mul[1][y+1]!=0)
                    mul[1][y+1]*=v;
                else
                    mul[1][y+1]=v;

            f=2;
        }
        else if(c==3)
        {
            cin>>v;
            if(f==1)
                {
                    sum=0;
                    for(int i=0;i<=x;i++)
                        sum+=add[i];
                    add[x]-=sum;
                    add[y+1]+=sum;
                }

            else if(f==2)
                domul();
            for(int i=x;i<y;i++)
                a[i]==v;
        }
        else if(c==4)
        {
            if(f==1)
                doadd();
            else if(f==2)
                domul();

            sum=0;
            //for(int i=x;i<=y;i++)
              //  sum+=a[i];
            printf("%lld\n",a[y+1]-a[x]);
        }
}
}
