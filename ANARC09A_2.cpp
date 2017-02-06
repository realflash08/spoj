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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
vector<int> v[100010];
#define INF 99999999


int vis[100002]={0};

int main()
{
    ll t,n,c,p,h=1;
    string s;
    cin>>s;

    while(s[0]!='-')
    {
        p=0;
        c=0;
        rep(i,0,s.length())
        {
            if(s[i]=='{')
                {
                    p++;
                }
                else if(s[i]=='}'&&p==0)
                {
                    c++;
                    p++;
                }
                else
                {
                    p--;
                }
        }
        cout<<h<<". "<<(p/2)+c<<"\n";

cin>>s;
h++;


    }
}
