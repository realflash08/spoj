#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,c,j;
    char a[205];
    cin>>t;
    while(t--)
    {
        c=0;
        scanf("%s",&a);
        n=strlen(a);
        for(int i=0;i<n-1;i++)
        {

            for( j=i+1;j<n&&a[i]!='0';j++)
                if(a[i]==a[j])
                {
                    a[i]=a[j]='0';
                    c++;
                    break;
                }

        }
        for(int i=0;i<n;i++)
            if(a[i]!='0')
            c++;
        cout<<c<<"\n";
    }
}
