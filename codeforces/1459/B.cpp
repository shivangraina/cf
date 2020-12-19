              #include <bits/stdc++.h>

              #include <iostream>

              # define ll long long
              #define watch(x) cout << (#x) << " is " << (x) << endl
              ll Ceil(ll a, ll b) {
                return ((a / b) + (a % b != 0));
              }
              using namespace std;
//(3 n (n + 4) - (-1)^n (n (n + 4) + 2) + 10)/8
              int main() {
               
                  ll n;
                  cin>>n;
                  if (n % 2 == 0) {
                    //-
                    cout<<(3*n *(n + 4) - 1*(n *(n + 4) + 2) + 10)/8<<endl;
                  }
                  else cout<<(3*n *(n + 4) + 1*(n *(n + 4) + 2) + 10)/8<<endl;
                
              }