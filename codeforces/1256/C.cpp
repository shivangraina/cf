        #include <bits/stdc++.h>
  #include <iostream>
  # define ll long long
  #define watch(x) cout << (#x) << " is " << (x) << endl
  ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
  using namespace std;



        int main() {
          ll n, m, d;
          cin>>n>>m>>d;
          vector<ll> ans(n + 1);   //1 indexed
          vector<ll> v(m);
          ll sum=0;
          for (auto &a : v){
            cin >> a;
            sum+=a;
          }
          if (sum > n){
            cout << "NO\n";
            exit(0);

          }
          
          ll spaces = (m + 1) * (d - 1);
          ll total = spaces + sum;
          if (n > total) {
             cout << "NO\n";
            exit(0);
          }
          ll cancel = (total-n) / max((d - 1),1ll);
          ll extra = (total-n) %  max((d - 1),1ll);
          ll j = 0;
          ll last_pos = 0;
         // cout << cancel << endl;
          ll c=1;
          while (cancel--) {
            for (int i = 1; i <= v[j]&& c<=n; i++) {

              if(c<=n)  
              ans[c] = j+1;
              last_pos = i + j;
              c++;
            }
          
            j++;
          }
          ll expected = c-1+ d ;
          ll current = expected - extra;
          // cout<<expected<<" "<<current<<" "<<c<<endl;
          if(j<m){
          for (int k = 0; k < v[j]&&current<=n; k++) {
              if(current<=n)
            ans[current] = j+1;
            current++;
          }
          }
          j++;
          if(j<m){
          for (int i = j; i < m&& current<=n; i++) {
            for (int s = 1; s <= d - 1; s++) {
              current++;
            }
            for (int k = 1; k <= v[i]; k++) {
              if (current <= n) {
                ans[current] = i+1;
                current++;
              }
            }
          }
          }
           cout << "YES\n";
            
          for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
          cout<<endl;

        }

