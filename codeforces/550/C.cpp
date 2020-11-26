#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

int main() {
  string s;
  cin >> s;
  if (s.find('0') != string::npos)
    cout << "YES\n0\n";
  else{
  bool ok = false;
  vector<ll>a;
  for (int i = 8; i <= 999; i+=8) {
    int no = i;
    for (int j = s.length()-1; j>=0; j--) {
      int c = s[j] - '0';
      if (no % 10 == c) {
     
  a.push_back(no%10);
        no = no / 10;
       
      }
      if(no==0) break;
    }
    if (no == 0) {
      ok = true;
      break;
    }
    a.clear();
  }

  if (ok){
    cout << "YES\n";
    for (int i = (ll)a.size() - 1; i >= 0; i--)
      cout << a[i];
    cout<<endl;

  } else
    cout << "NO\n";
  }
}


