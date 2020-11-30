#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

// 1 2 3 4 5 6

int main() {
  ll n;
  cin >> n;
  vector<ll> v(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
   bool ok=false;
  for (int i = 3; i <= n; i++) {
    if ((v[i - 1] ^ v[i]) < v[i-2]) {
      cout << "1\n";
      ok=true;
      break;    
    }
  }
  if (!ok) {
    ll ans=MAXX;
    for (ll l = 1; l <= n; l++) {
      
      for (ll r = l ; r <= n; r++) {
        ll left_xor = 0;
        for (int i = l; i <= r; i++) {
          left_xor^=v[i];
        }
        for (ll k = r + 1; k <= n; k++) {
          ll right_xor=0;
           for (int i = r+1; i <= k; i++) {
          right_xor^=v[i];
           }  
           if (left_xor > right_xor) {
             ans=min(ans,r-l+k-(r+1));
           }
        }
      }
    }
    if (ans == MAXX)
      cout << "-1\n";
    else
      cout << ans << "\n";

  }


  }



