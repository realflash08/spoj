// by realflash
#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <vector>
#include<stack>
#include<queue>
#include<bitset>
#include<map>
#include<limits>
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define MEM(a,b) memset(a,(b),sizeof(a))
#define sl(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

int b1[100300],b2[100300];

void u1(int x, int val)
{
      for(; x <= 100003; x += x&-x)
        b1[x] += val;
}
int q1(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b1[x];
     return sum;
}
void u2(int x, int val)
{
      for(; x <= 100003; x += x&-x)
        b2[x] += val;
}
int q2(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b2[x];
     return sum;
}

int main()
{


}

