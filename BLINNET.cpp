#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<queue>
#include<bitset>
#include<map>
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)

int MAX=numeric_limits<int>::max();

map< ll ,pii> mp;

int root[100003],siz[100003];
ll edge[100003],v1[100003],v2[100002];



void quicksort(int first,int last){
    long long pivot,j,temp,i,ti;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(edge[i]<=edge[pivot]&&i<last)
                 i++;
             while(edge[j]>edge[pivot])
                 j--;
             if(i<j){
                 temp=edge[i];
                  edge[i]=edge[j];
                  edge[j]=temp;
                  temp=v1[i];
                  v1[i]=v1[j];
                  v1[j]=temp;
                  temp=v2[i];
                  v2[i]=v2[j];
                  v2[j]=temp;
                }
         }
         int i=pivot;
                    temp=edge[i];
                  edge[i]=edge[j];
                  edge[j]=temp;
                  temp=v1[i];
                  v1[i]=v1[j];
                  v1[j]=temp;
                  temp=v2[i];
                  v2[i]=v2[j];
                  v2[j]=temp;


         quicksort(first,j-1);
         quicksort(j+1,last);

    }
}


int finde(int x)
{
    while(x!=root[x])
        x=root[root[root[x]]];
    return x;
}

void join(int r1,int r2)
{

    if(r1!=r2)
    {
        if(siz[r1]>=siz[r2])
        {
            root[r2]=r1;
            siz[r1]+=siz[r2];
        }
        else
        {
            root[r1]=r2;
            siz[r2]+=siz[r1];
        }
    }
}

int main()
{
    int n,k,a,b,e;
    ll tot=0;
    string s;
    TEST
    {
        int p=0;
        tot=0;
        mp.clear();
        cin>>n;
        rep(i,1,n+1)
        {
            root[i]=i;
            siz[i]=1;
            cin>>s;
            cin>>k;
            while(k--)
            {
                cin>>a>>e;
                if(a>i)
                {
                    edge[p]=e;
                    v1[p]=i;
                    v2[p]=a;
                    p++;
                }

            }
        }
        quicksort(0,p-1);
        int i=0;
        while(i<p)
        {
            e=edge[i];
            a=v1[i];
            b=v2[i];
           // cout<<e<<" "<<a<<" "<<b<<"\n";
            a=finde(a);
            b=finde(b);
            if(a!=b)
            {
                join(a,b);
                tot+=e;
            }
            i++;
        }
        cout<<tot<<"\n";

    }
}

