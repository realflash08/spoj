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
#define ll long long
typedef pair<int, int > pii;
#define pb push_back
#define mk make_pair
#define rep(p,q,r) for(int p=q;p<r;p++)
#define TEST int t; cin >> t;while(t--)

int main()
{
    string a,b;
    while(cin>>a){
            cin>>b;
    string dps[200][200];


    int n1=a.length(),n2=b.length();
    for(int i=0;i<=n1;i++)
        for(int j=0;j<=n2;j++)
        dps[i][j]="0";

    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dps[i][j]=dps[i-1][j-1]+a.substr(i-1,1);
            }
            else
            {
                if(dps[i-1][j].length()>dps[i][j-1].length())
                    dps[i][j]=dps[i-1][j];
                else
                    dps[i][j]=dps[i][j-1];
            }
        }
    }
    string str=dps[n1][n2],ans;
    int n=str.length()-1;
    str=str.substr(1,n);
    //cout<<str<<"\n";
ans="0";
    int p1=0,p2=0,p=0;
    for(;p<n;p++)
    {
        //cout<<"\t\t"<<str[p]<<"\n";
        while(a[p1]!=str[p]&&p1<n1)
            {ans=ans+a.substr(p1++,1);
            //cout<<ans<<"\n";
            }
           // cout<<"\n";
        while(b[p2]!=str[p]&&p2<n2)
            {ans=ans+b.substr(p2++,1);
          //  cout<<ans<<"\n";
            }
           // cout<<"\n";
        ans=ans+str.substr(p,1);
        p1++;
        p2++;

        //cout<<ans<<"\n";
    }
     while(p1<n1)
            ans=ans+a.substr(p1++,1);
    while(p2<n2)
            ans=ans+b.substr(p2++,1);
    n=ans.length();
    ans=ans.substr(1,n-1);
    cout<<ans<<"\n";
    }

}
