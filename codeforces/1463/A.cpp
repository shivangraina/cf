        #include <bits/stdc++.h>

        #include <iostream>

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
            ll a, b, c;
            cin >> a >> b >> c;
            if ((a + b + c) % 9 == 0 && min({a, b, c}) >= (a + b + c) / 9)
              cout << "YES\n";
            else cout<<"NO\n";
          }
        }