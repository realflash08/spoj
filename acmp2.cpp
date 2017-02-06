#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char in[1000010];

int main(){
  int i, k;
  int len, nonzeros;
  long long res = 0;

  scanf("%s",in);
  len = strlen(in);
int q,l,m;
cin>>q;
while(q--){
        cin>>m>>l;
  /* 1 digit */
  for(i=0; i<len; i++){
    k = in[i] - '0';
    if(k == l) res++;
  }

  /* 2 digits */
  for(i=1; i<len; i++){
    if(in[i-1] == '0') continue;
    (k =k+ (in[i-1] - '0') * 10 + (in[i] - '0'))%m;
    if(k == l) res++;
  }

  /* 3 digits or more digits */
  nonzeros = 0;
  for(i=2; i<len; i++){
    (k = (in[i-2] - '0') * 100 + (in[i-1] - '0') * 10 + (in[i] - '0'))%m;
    if(in[i-2] != '0') nonzeros++;
    if(k%l == 0) res += nonzeros;
  }

  printf("%lld\n", res);
}
  return 0;
}
