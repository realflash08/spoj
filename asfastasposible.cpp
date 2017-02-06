#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int n,l,v1,v2,k;
int m;



int main() {
	scanf("%d%d%d%d%d",&n,&l,&v1,&v2,&k);
	if (n<=k) {
		double t=(double)l/v2;
		printf("%.10lf\n",t);
		return 0;
	}
	int m=(n/k)+((n%k)?1:0);
	double down=((double)2*v2*(m-1))/((double)v1+v2)+(double)v2/v1;
	double up=(double)v2/v1*l;
	double x=up/down;
	double t=x/v2+(l-x)/v1;
	printf("%.10lf",t);
}
