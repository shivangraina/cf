          #include <bits/stdc++.h>

          #include <iostream>

          # define ll long long
          #define watch(x) cout << (#x) << " is " << (x) << endl
          ll Ceil(ll a, ll b) {
            return ((a / b) + (a % b != 0));
          }
          using namespace std;
          bool check(ll n) {
              ll nn=n;
            while (nn) {
              ll r = nn % 10;
              if(r>0&&n%r) return false;
              nn=nn/10;
            }
            return true;
          }

          int main() {
            ll test;
            cin >> test;
            while (test--) {
              ll n;
              cin >> n;
              for (ll i = n; i <= n + 362882; i++) {
                if(check(i)) {cout<<i<<"\n"; break;}
              }
              
            }
          }