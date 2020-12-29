#include <bits/stdc++.h>
#include <iostream>
# define ll long long
#define watch(x) cout << (#x) << " is " << (x) << endl
ll Ceil(ll a, ll b) {
return ((a / b) + (a % b != 0));
}
using namespace std;
pair<ll, ll> inter(ll x1, ll x2,ll y1,ll y2) {
  pair<ll, ll> a;
  a.first = max(x1, x2);
  a.second = min(y1, y2);
  return a;
}

int main() {
ll test;
cin >> test;
while (test--) {
  ll n, k;
  cin >> n >> k;
  vector<ll> h(n);
  for(auto &a:h)cin>>a;
  ll mx = h[0] + k - 1;
  ll minn = h[0] - k + 1;
  bool ok=true;
  for (int i = 1; i < n; i++) {
     pair<int, int> intersect;
    if(i<n-1)
       intersect = inter(minn, h[i], mx, h[i] + k - 1);
    if(i==n-1)intersect = inter(minn, h[i], mx, h[i]);   //last pos
   
    if (intersect.first > intersect.second) {
      ok = false;
      break;
    }
    minn = intersect.first-k+1;
    mx=intersect.second+k-1;
  }
  if (!ok)
    cout << "NO\n";
  else cout<<"YES\n";
}
}