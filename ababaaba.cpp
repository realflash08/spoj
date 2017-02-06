#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<bitset>
#define ll long long
typedef pair<int, int > pii;
#define rep(p,q,r) for(int p=q;p<r;p++)
vector<pair<int,long long int> > v[100010];

int vis[100002]={0};


int main()
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		int l=strlen(a);
		int i,j;
		int c1,c2;
		c1=c2=0;
		for(i=0;i<l;i++)
		{
			if(a[i]=='A')
			c1++;
			else
			c2++;
		}
		if(c1==2)
		{
			printf("A\n");
			continue;
		}
		if(c2==2)
		{
			printf("B\n");
			continue;
		}
		int s,f=0,ind;
		for(int i=1;i<l;i++)
        {
            if(a[i]==a[i-1])
            {

            }
        }
	}
}
