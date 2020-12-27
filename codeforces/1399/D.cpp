#include<bits/stdc++.h>
#include <iostream>

# define ll long long
using namespace std;
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll sz;
    cin >> sz;
    string s;
    cin >> s;
    vector < set < ll >> ss(2);
    for (int i = 0; i < sz; i++) {
      if (s[i] == '0') ss[0].insert(i + 1);
      else ss[1].insert(i + 1);
    }
    ll ans = 0;
    vector<int>arr(sz+1);
    while (!ss[0].empty() && !ss[1].empty()) {
      bool which = 0;
      ans++;
      if ( * ss[1].begin() < * ss[0].begin()) which = 1;

      ll index = 0;
      while (ss[which].upper_bound(index) != ss[which].end()) {
        auto itr = ss[which].upper_bound(index);
        index = * itr;
        ss[which].erase(itr);
        which = !which;
        arr[index]=ans;

      }
    }
     cout << ans + ss[0].size() + ss[1].size() << "\n";
    while (ss[0].size()) {
      ans++;
      int e = *ss[0].begin();
      arr[e] = ans;
      ss[0].erase(ss[0].begin());
    }
     while (ss[1].size()) {
      ans++;
      int e = *ss[1].begin();
      arr[e] = ans;
      ss[1].erase(ss[1].begin());
    }
    for (int i = 1; i <= sz; i++)
      cout << arr[i] << " ";
    cout<<endl;
  }
}