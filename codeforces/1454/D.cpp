    #include <bits/stdc++.h>
    #include <iostream>
    #define ll long long
    using namespace std;
    ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
    # define MAXX 10000000000000

    int main() {
      ll t;
      cin >> t;
      while(t--){
      ll n;
      cin >> n;
      ll a = 1;
       ll d=n;
      for (ll i = 2; i*i <= n; i++) {
        ll temp = n;
        ll ans=0;
        while (temp%i==0&&(temp/i)>0&&(temp/i)% i == 0) {
          temp /= i;
          ans++;
        }
        ans++;
        if (ans > a) {
          a = ans;
          d=i;
        }
      }
      cout << a << "\n";
        ll temp=n;
        while (temp>0 && temp%d==0&&(temp/d)%d==0) {
            temp /= d;
            
            cout<<d<<" ";
        }
        if(temp) cout<<temp<<" ";
        cout<<endl;
      }
    }

