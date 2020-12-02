        #include <bits/stdc++.h>
        #include <iostream>
        #define ll long long
    using namespace std;
    ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }


#define MAXX 100000000000000
   

        int main() {
        ll t;
        cin >> t;
        while (t--) {
          ll n;
          cin >> n;
          ll s = 0;
          ll mx=0;
          for (int i = 0; i < n; i++) {
            ll e;
            cin >> e;
            mx=max(mx,e);
            s+=e;
          }
          ll ans=MAXX;
          ll l = mx, r = 10000000000000;
          while (l <= r) {
            ll m = (l + r) / 2;        //fix for each n-1 element 
           ll extra= m*(n-1)-s;
            
            if (extra >=0) {
              r = m- 1;
              ans=min(ans,extra);
            } else
              l = m + 1;
          //  cout<<l<<" "<<r<<endl;
          }
          cout<<ans<<"\n";
          
          
        }
        
        }