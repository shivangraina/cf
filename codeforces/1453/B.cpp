#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000
int absa(int a, int b) {
  if (a < 0 && b > 0 || b < 0 && a > 0)
    return abs(a - b);
  else return abs((abs(a)-abs(b)));
}

int main() {

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &a : v)
      cin >> a;
    ll ans=0;
    for (int i = 1; i < n; i++) {
      ans+=absa(v[i-1],v[i]);
    }
    ll a=ans;
     //cout<<a<<endl;  
    for (int i = 1; i < n-1; i++) {
      ans = min(ans, a - absa(v[i], v[i - 1]) - absa(v[i], v[i + 1]) +
                         absa(v[i - 1], v[i + 1]));

     //cout<<i<<" "<<" "<<absa(v[i],v[i-1])-absa(v[i],v[i+1])+absa(v[i-1],v[i+1])<<" "<<ans<<endl;
    }
     ans = min({ans, a - absa(v[0] ,v[1]),a - absa(v[n - 1] ,v[n - 2])});
   
    
   cout<<ans<<endl;
      
    
    
    
  
  }
}


