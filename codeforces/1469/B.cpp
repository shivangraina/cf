#include <bits/stdc++.h>
# define ll long long
#define watch(x) cout << (#x) << " is " << (x) << endl
ll Ceil(ll a, ll b) {
return ((a / b) + (a % b != 0));
}
using namespace std;

int main() {
ll test;
cin >> test;
while (test--) {
  ll n, m;
  cin >> n;
  vector<ll> v(n);
  for (auto &a : v)
    cin >> a;
  cin >> m;
  vector<ll> v2(m);
  for (auto &a : v2)
    cin >> a;
  vector<ll>pre1(n+1),pre2(m+1);
  for (int i = 1; i <= n; i++) {
    pre1[i]=pre1[i-1]+v[i-1];
  }
  for (int i = 1; i <= m; i++) {
    pre2[i]=pre2[i-1]+v2[i-1];
  }
  ll ans=0;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      ans = max(ans, pre1[i] + pre2[j]);
      ans=max(ans,0ll);
    }
  }
  cout<<ans<<"\n";
}
}