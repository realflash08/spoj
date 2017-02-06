
#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked
#include<math.h>



inline int readInt()
{ int n=0;char c=gc();int f=1;
while((c<'0'||c>'9')&&c!='-')
c=gc();
if(c=='-')
    f=-1;
while(c<='9'&&c>='0'){
n=n*10+c-'0';
c=gc();}

return (f*n);
}


int main()
{
    long int t,n,x,c;
    t=readInt();
    while(t--)
    {
        c=0;
        n=readInt();
        x=sqrt(n);
        printf("%d",x);
        printf("\n");


    }

}
