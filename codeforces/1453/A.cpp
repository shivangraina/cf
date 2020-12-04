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
    ll n, m;
    cin >> n >> m;
    unordered_set<ll> s;
    for (int i = 0; i < n; i++) {
      ll e;
      cin>>e;
      s.insert(e);
    }
    for (int i = 0; i < m; i++) {
      ll e;
      cin >> e;
      s.erase(e);
    }
    cout<<n-s.size()<<endl;
      
    
    
    
  
  }
}


