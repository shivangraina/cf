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
    ll n, p, k;
    cin>>n>>p>>k;
    vector<ll> dp(n + 1);
    string s;
    cin >> s;
    for (int i = n - 1; i >= 0; i--) {
    
        if(s[i]=='0')
          dp[i]++;
        if(i-k>=0)
        dp[i - k] += dp[i];
      
    }
    
    ll x, y;

    cin >> x >> y;
    
    ll ans=MAXX;
    for (int i = p-1; i < n; i++) {
      ans=min(ans,y*(i-p+1)+(dp[i]*x));
    }
    cout<<ans<<"\n";
    
  }
}


