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

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
      ll a, b;
      cin >> a >> b;
      v.push_back({a,b});
    }
   
     bool theek=false;
    for (int i = 0; i < n; i++) {

        bool ok=true;
    
      for (int j = 0; j < n; j++) {
        ll x = abs(v[i].first - v[j].first);
        ll y = abs(v[i].second - v[j].second);
        ll d = x + y;
        if(d>k) ok=false;
      }

      if(ok) {theek=true; break;}
    
  }
  if (!theek)
    cout << "-1\n";
  else cout<<"1\n";
    
    
  
  }
}


