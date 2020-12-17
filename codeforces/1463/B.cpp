        #include <bits/stdc++.h>
  #include <iostream>
  # define ll long long
  #define watch(x) cout << (#x) << " is " << (x) << endl
  ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
  using namespace std;



        int main() {
          ll test;
          cin >> test;
          while (test--) {
            ll n;
            cin >> n;
            for (int i = 0; i < n; i++) {
              ll a;
              cin>>a;
              ll z = log2(a);
              cout<<(1ll<<z)<<" ";
            }
            cout<<endl;
          }
        }

