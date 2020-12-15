        #include <algorithm>
#include <bits/stdc++.h>
  #include <iostream>
  # define ll long long
  #define watch(x) cout << (#x) << " is " << (x) << endl
  ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
  using namespace std;



        int main() {
          ll t;
          cin >> t;
          while (t--) {
            ll n;
            cin>>n;
            vector<ll> x, y;
            vector<pair<ll,ll>>v;
            for (int i = 1; i <= n; i++) {
              ll a, b;
              cin >> a >> b;
              x.push_back(a);
              y.push_back(b);
              v.push_back({a,b});
            }
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            sort(v.begin(),v.end());
            ll mx = 0;
            ll j = 0;
            ll ans=0;
            for (int i = 0; i < n; i++) {
              ll an=0;
              ll current_start_time = v[i].first;
              ll current_end_time = v[i].second;
              ll a = lower_bound(x.begin(),x.end(),current_start_time)-x.begin();
              ll b = lower_bound(y.begin(), y.end(), current_start_time) -
                     y.begin();
              an += a - b;
              ll c = n - (lower_bound(x.begin(), x.end(), current_start_time) -
                          x.begin());
              ll d=n - (upper_bound(x.begin(), x.end(), current_end_time) -
                          x.begin());
              an += c - d;
             
              ans=max(ans,an);
            
            }
            cout<<n-ans<<"\n";
          }
        }

