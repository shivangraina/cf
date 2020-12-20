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
              map<int, int> which_col;
              ll n, m;
              cin >> n >> m;
              vector<pair<ll, ll>> v;
              ll ans=0;
              for (int i = 0; i < m; i++) {
                ll a, b;
                cin >> a >> b;
                which_col[a] = b; // check for row b which has col a
            
                if(a!=b) ans++;
              }
              ll cycles = 0;
        
           
              for (int i = 1; i <= n; i++) {
                if (which_col[i] > 0) {
                    unordered_set<ll>vis;
                 
                  ll j = i;
                  while (which_col[j]>0&&vis.find(j)==vis.end()&& which_col[j]!=j) {
                    vis.insert(j);
                    j = which_col[j];
                    if(j==0) break;
                    if (vis.find(j) != vis.end()) {
                      
                      cycles++;
                      break;
                    }
                  }
                  for (auto &a : vis) {
                    which_col[a]=0;
                  }
                }
                
              }
              cout<<ans+cycles<<"\n";
            }
          }