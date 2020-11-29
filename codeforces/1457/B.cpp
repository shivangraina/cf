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
    vector<ll> color(n + 1);
    for(int i=1;i<=n;i++) cin>>color[i];
ll g_ans=MAXX;
for (int no = 1; no <= 100; no++) {
  ll ans=0;
  for (int j = 1; j <= n; j++) {
    if (color[j] != no) {
      ans++;
      j+=(k-1);
     }
  }
  g_ans=min(g_ans,ans);
    }
    cout<<g_ans<<"\n";
  }
}


