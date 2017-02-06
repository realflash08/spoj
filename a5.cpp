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
#define si(x) scanf("%d",&x)
#define si2(x,y) scanf("%d %d",&x,&y)
#define sl(x) scanf("%lld",&x)
#define ff first
#define ss second
#define prl(x) printf("%lld\n",x)
int MAX=numeric_limits<int>::max();

//ios_base::sync_with_stdio(0);cin.tie(0);
int mat[102][102];

int main()
{
    TEST
    {
        MEM(mat,0);
        int n,m,d,e;
        cin>>n>>m>>d>>e;
        int i1[103]={0},i2[102]={0};
        int f=0;
        int s=0;


            rep(i,0,n)
            {
                rep(j,0,n)
                {
                    if(i2[j]<e&&mat[i][j]==0&&i1[i]<=d)
                    {
                        i1[i]++;
                        i2[j]++;
                        mat[i][j]=1;
                        s++;
                        if(s==m)
                            {
                                f=1;
                                break;
                            }

                    }
                }
                    sort(i2,i2+n);

            }

                rep(i,0,n)
                {
                    if(i1[i]<e)
                    {
                        rep(j,0,n)
                        {
                            if(i2[j]<e&&mat[i][j]==0)
                            {
                                i1[i]++;
                                i2[j]++;
                                mat[i][j]=1;
                                s++;
                                if(s==m)
                            {
                                f=1;
                                break;
                            }
                            }
                        }
                    }
                        sort(i2,i2+n);

                }

            if(f==0)
                cout<<-1<<"\n";
            else
            {
                rep(i,0,n)
                rep(j,0,n)
                {
                    if(mat[i][j]==1)
                        cout<<i+1<<" "<<j+1<<"\n";
                }
            }

        }

}


