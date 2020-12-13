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
          ll a, b, n, s;
          cin >> a >> b >> n >> s;
          ll x = min(s / n, a);
          if(s-n*x<=b)
            cout << "YES\n";
          else cout<<"NO\n";
        
        }
      }

