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
          unordered_set<ll>move;
          vector<ll> v(n);
          for (auto &a : v)
            cin >> a;
          for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
              for (int k = 1; k < n; k++) {
                if(v[k]==i&& v[k-1]>i&& move.find(k)==move.end()) {swap(v[k],v[k-1]); move.insert(k);}
              }
            }
          }
          for (auto a : v)
            cout << a << " ";
          cout<<"\n";
        
        }
      }

