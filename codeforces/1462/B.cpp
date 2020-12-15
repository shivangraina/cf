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
            string s;
            cin >> s;
            if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
              cout << "YES\n";

            else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' &&
                     s[n - 1] == '0')
              cout << "YES\n";
            else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' &&
                     s[n - 1] == '0')
              cout << "YES\n";
            else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
              cout << "YES\n";
            else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' &&
                     s[n - 1] == '0')
              cout << "YES\n";
            else cout<<"NO\n";
          }
        }

