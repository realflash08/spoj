#include<iostream>

#include<stdio.h>
using namespace std;
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
int t,p;
char a[10000],b[10000];
cin>>t;
while(t--)

{
    scanf("%s",&a);
    p=0;
    b[0]='\0';
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]<='z'&&a[i]>='a')
        {
            if(a[i]<'z')
                b[p++]=a[i]+1;
            else b[p++]='a';
        }
                if(a[i]<='Z'&&a[i]>='A')
        {
            if(a[i]<'Z')
                b[p++]=a[i]+1;
            else b[p++]='A';
        }


    }
    b[p]='\0';
    cout<<b<<"\n";
}}
