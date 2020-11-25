#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

int main() {
  string s;
  cin >> s;
  unordered_map<ll, vector<ll>> m;
  ll len = s.length();
  ll ans=0;
  for (int i = 0; i <len; i++) {
    m[s[i] - 'a'].push_back(i + 1);
    ans = max(ans, (ll)m[s[i] - 'a'].size());
    
  }
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      ll a=0;
      for(int k=0;k<m[i].size();k++){
        a += lower_bound(m[j].begin(), m[j].end(), m[i][k]) - m[j].begin();
    
      }
     
      ans=max(ans,a);
    }
  }
  
 cout<<ans<<"\n";
}


