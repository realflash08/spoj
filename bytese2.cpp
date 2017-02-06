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


#define F first
#define S second
#define mp make_pair
pair<int,int> p[210];

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,x,y,ans=0,cur=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			scanf("%d%d",&x,&y);
			p[i*2]=mp(x,1);
			p[i*2+1]=mp(y,-1);
		}
		sort(p,p+2*n);
		for(int i=0;i<2*n;i++) ans=max(ans,cur+=p[i].second);
		printf("%d\n",ans);
	}
	return 0;
}
