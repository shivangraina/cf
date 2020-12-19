                    #include <bits/stdc++.h>

                    #include <iostream>

                    # define ll long long
                    #define watch(x) cout << (#x) << " is " << (x) << endl
                    ll Ceil(ll a, ll b) {
                      return ((a / b) + (a % b != 0));
                    }
                    using namespace std;
    
                    int main() {

                      ll n,m;
                      cin >> n>>m;
                      vector<ll> v(n),b(m);
                      for (auto &a : v)
                        cin >> a;
                      for (auto &a : b)
                        cin >> a;
                      sort(v.begin(), v.end());
                      ll g=0;
                      for (int i = 1; i < n; i++) {
                        g=__gcd(v[i]-v[i-1],g);
                      }
                      for (int i = 0; i < m; i++) {
                        cout<<__gcd(g,v[0]+b[i])<<" ";
                      }
                      cout<<"\n";
                    }