#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  for (auto &a : v)
    cin >> a;
 
  sort(v.begin(), v.end());
  ll s = 0;
  vector<ll>ans(n+1);
  for (int i = 1; i <=n; i++) {
    s += v[i-1];
    ans[i]=s;
    if (i >= m) {
      ans[i]+=ans[i-m];
    }
   }
   for (int i = 1; i <= n; i++)
     cout << ans[i] << " ";
   cout<<endl;
  }


