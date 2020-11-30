#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

int main() {

  ll t;
  cin >> t;
  while (t--) {
  ll x;
  cin>>x;
  ll cnt=0;
  int i=0;
  bool ok=false;
  for( i=1;i<=x;i++){
    cnt++;
    if(i*(i+1)/2 ==x) {
      ok =true;
      break;
    }
    else if((i*(i+1)/2>x)) break;
  }
  if(ok) cout<<cnt<<endl;
  else{
    if((i*(i+1)/2)-x==1) cout<<cnt+1<<"\n";
    else cout<<cnt<<endl;
  }
  }
}


