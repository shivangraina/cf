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
            ll n, k;
            cin >> n >> k;
            string s;
            cin>>s;
            vector<ll>z;
            for (int i = 0; i < s.length(); i++) {
              if(s[i]=='0')  z.push_back(i);
            }
            string ans(n,'#');
            
            ll sum = 0;
            ll index=-1;
            for (int i = 0; i < z.size(); i++) {
              if (sum + z[i] - i <= k) {
                sum += z[i]-i;
                ans[i] = '0';

              } else {
                // cout<<k<<" "<<z[i]-k+sum<<endl;
                ll left=k-sum;
                ans[z[i] -left] = '0';
                
                index = z[i];
                  break;
              }
            }
            if(index!=-1){
            for (int i = 0; i < z.size(); i++) {
              if (z[i] > index) {
                ans[z[i]]='0';
              }
            }
            }
            for (int i = 0; i < n; i++) {
                if(ans[i]=='#')  ans[i]='1';
              }
            cout<<ans<<"\n";
          }
        }

