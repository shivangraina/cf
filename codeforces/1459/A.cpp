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
              string s1, s2;
              ll n;
              cin>>n;
              cin >> s1 >> s2;
              ll b = 0;
              ll r = 0 ;for (int i = 0; i < n; i++) {
                if (s1[i] > s2[i])
                  r++;
                else if(s2[i]>s1[i])b++;
              }
              if (r > b)
                cout << "RED\n";
              else if (b > r)
                cout << "BLUE\n";
              else cout<<"EQUAL\n"; 
            }
          }