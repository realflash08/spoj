#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    long long t,n,k,s;
    cin>>t;
    while(t--)
    {


long long  DP[N][K];
long long  set[N];

//go through all elements in the set by index
for i in range[0..N-1]
   //count the one element subset consisting only of set[i]
   DP[i][set[i]] = 1

   if (i == 0) continue;

   //case 1. build and count all subsets that don't contain element set[i]
   for k in range[1..K-1]
       DP[i][k] += DP[i-1][k]

    //case 2. build and count subsets that contain element set[i]
    for k in range[0..K-1]
       if k + set[i] >= K then break inner loop
       DP[i][k+set[i]] += DP[i-1][k]

//result is the number of all subsets - number of subsets with sum < K
//the -1 is for the empty subset
return 2^N - sum(DP[N-1][1..K-1]) - 1
}
