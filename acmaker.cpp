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
#define scand(x) scanf("%d",&x)
#include <sstream>
#include <cstring>
#include<set>
#define scanlld(x) scanf("%lld",&x)
#define prline(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

ll dp[152][152],limit[151],lim2[151],dp2[152][152];
string a,abb;

int main()
{
    int n;
    scand(n);
    while(n!=0)
    {

        set<string >ins;
        string x,y;
        int k=0,p=1,cnt;
        while(n--)
        {
            cin>>x;
            ins.insert(x);
        }

        for (;;) {
            cin >> abb;
            vector<string>w;
            cin.ignore();
            string phrase;
            getline(cin, phrase);
            if (phrase == "CASE") break;
            istringstream iss(phrase);
            memset(dp,0,sizeof(dp));
            memset(dp2,0,sizeof(dp2));


            for (;;) {
                string word; iss >> word;
                if (word == "") break;
                if (ins.find(word) == ins.end()) {
                    {
                        w.pb(word);
                    }
                }
            }
            n=w.size();
            dp[0][0]=1;
            for(int i=1;i<=n;i++)
            {
               // cout<<w[i-1]<<"\n";
                for(int j=1;j<=abb.length();j++)
                {
                int mx=min(abb.length() - j+1, w[i-1].length());
                //cout<<abb.length()<<"mx = "<<mx<<"\n";
                    for (int k = 0; k <= w[i-1].length(); k++) {
                        dp2[k][0] = 1;
                    }
                    for (int k = 1; k <= mx; k++) {
                        dp2[0][k] = 0;
                    }
                    for(int k=1;k<=w[i-1].length();k++)
                    {
                        for(int m=1;m<=mx;m++)
                        {
                           // if(i==1)
                          //  cout<<j<<" "<<m<<" "<<w[i-1][k-1]<<" "<<abb[j+m-2]<<"\n";
                            dp2[k][m]=dp2[k-1][m];
                            if(w[i-1][k-1]==tolower(abb[j+m-2]))
                            {
                                //cout<<w[i-1][k-1]<<"\n";
                                dp2[k][m]+=dp2[k-1][m-1];
                            }
                         //   cout<<" k m "<<dp[k][m]<<"\n";
                        }
                    }
                    //cout<<"-------"<<dp2[w[i-1].length()][mx]<<"\n";
                    for(int k=1;k<=mx;k++)
                        dp[i][j+k-1]+=dp[i-1][j-1]*dp2[w[i-1].length()][k];
                   // cout<<i<<" "<<j<<" "<<dp[i][j+mx-1]<<"\n";
                }
                }



            if(dp[n][abb.length()]==0)
                cout<<abb<<" is not a valid abbreviation\n";
            else
                cout<<abb<<" can be formed in "<<dp[n][abb.length()]<<" ways\n";


        }
        scand(n);

    }

}
