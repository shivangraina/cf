#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000


int main() {

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    string a,b;

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 't')
        b += 't';
      else a+=s[i];
    }
    cout<<a+b<<endl;

  }
    
    
    
  
  }



