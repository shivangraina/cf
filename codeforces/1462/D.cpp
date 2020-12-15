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
            vector<ll> v(n + 1);
        
            ll sum=0;
            for (int i = 1; i <= n; i++){
              cin >> v[i];
             sum+=v[i];
            }
            vector<ll>d;

            for (int i = 1; i * i <= sum; i++) {
              if (sum % i == 0) {
                d.push_back(i);
                if (i != (sum / i)) {
                  d.push_back(sum/i);
                  
                }
              }
            }
            d.push_back(sum);
            ll ans=n-1;
            for (int i = 0;i<d.size();i++) {
              ll s = 0;
              ll a = 0;
              ll prev=1;
              bool ok=true;
              for (int j = 1; j <= n; j++) {
                s += v[j];
             
                if (s == d[i]) {
                  a += j - prev;
              
                  s = 0;
                  prev=j+1;
                }
                else if(s>d[i]) {ok=false;break;}
              }
              if(ok)
              ans=min(ans,a);
            }
            cout<<ans<<"\n";
          }
        }

