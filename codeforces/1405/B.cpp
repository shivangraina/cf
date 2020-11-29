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
    ll n;
    cin >> n;
    ll s= 0;
    ll ans=0;
    for (int i = 0; i < n; i++) {
      ll e;
      cin >> e;
      s += e;
      if(s<0) ans=max(ans,abs(s));
    }
    cout<<ans<<"\n";
  }
}


