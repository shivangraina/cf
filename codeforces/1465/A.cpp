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
              ll n;
              cin >> n;
              string s;
              cin >> s;
              ll index=0;
              for (int i = n - 1; i >= 0; i--) {
                if (s[i] != ')') {

                  index = i + 1;
                   break;
                }
              }
              if (n - index > index)
                cout << "YES\n";
              else cout<<"NO\n";
            }
          }