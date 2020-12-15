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
            cin >> n;
            vector<ll> v(n);
            for (auto &a : v)
              cin >> a;
            int l = 0, r = n - 1;
            ll cnt=0;
            while (l <= r) {
              if (cnt % 2 == 0) {
                cout << v[l] << " ";
                l++;
              } else {
                cout << v[r] << " ";
                r--;
              }
              cnt++;
            }
            cout<<endl;
          }
        }

