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
            string ans;
            ll next = 9;
            bool ok=true;
            while (n > 0&& next>0) {
              

              if (n <= next) {
                char c = '0' + (n);
                //cout<<c<<" "<<ans<<endl;
                ans = c + ans;
                n=0;
              } else {
                char c = '0' + (next);
                ans = c + ans;
                n -= next;
              }
              next--;
              if(n>0 && next==0) ok=false;
            }
            if(ok)
              cout << ans << endl;
            else cout<<"-1\n";
          }
        }

