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
#define MEM(a,b) memset(a,(b),sizeof(a))
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int test; cin >> test;while(test--)
#define ff first
#define ss second
#define BE(a) a.begin(), a.end()

//int MAX=numeric_limits<int>::max();
int ar[300000];
int f[300000];
int arr[3000000];
int cur=0;
int main()
{
    int n,a,b,k;cin>>n>>a>>b>>k;
    string s;
    cin>>s;
    int c=0;
    int kk=0;
    int pre=-1;
    rep(i,0,n)
    {
        if(s[i]=='1')
            {
                kk+=((c/b));
                for(int j=pre+a;j<=c;j+=a)
                    arr[cur++]=j;
                    cout<<"c - "<<c<<"\n";
                c=0;
                pre=i;
            }
        else
        {
            ++c;
        }
    }
    if(c>0)
    {
        kk+=((c/3));
        for(int j=pre+a;j<=c;j+=a)
                    arr[cur++]=j;
                      cout<<"c - "<<c<<"\n";
    }

    cout<<kk-b+1<<"\n";
    rep(i,0,kk-b+1)
    cout<<arr[i]<<" ";
}
