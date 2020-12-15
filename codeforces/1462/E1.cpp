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
              vector<ll> v(n);
              for (auto &a : v)
                cin >> a;
              sort(v.begin(), v.end());
              ll ans=0;
              for (int i = 0; i < n; i++) {
                ll l = upper_bound(v.begin(), v.end(), v[i] + 2) - v.begin();
                ll a = l - (i + 2);
                ans+=a*(a+1)/2;
              }
            cout<<ans<<endl;
            }
          }

