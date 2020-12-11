      #include <bits/stdc++.h>
#include <iostream>
# define ll long long
#define watch(x) cout << (#x) << " is " << (x) << endl
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
using namespace std;



      int main() {
        ll test;
        cin >> test;
        while(test--){
          ll n, k;
          cin >> n >> k;
          for (int i = 1; i <= n; i++) {
            if (i % 3 == 1)
              cout << "a";
            else if (i % 3 == 2)
              cout << "b";
            else cout<<"c";
          }
          cout<<endl;
        }
      }

