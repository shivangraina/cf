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
    unordered_map<ll, ll> m;
    ll ans=MAXX;
    for (int i = 1; i <= n; i++) {
      ll e;
      cin >> e;
      if (m[e] > 0) {
        ans = min(ans, i - m[e] + 1);
        
      }
      m[e]=i;
    }
    if (ans==MAXX)
      cout << "-1\n";
    else cout<<ans<<"\n";
  }
}


