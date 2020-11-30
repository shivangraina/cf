#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
#define MAXX 10000000000000

// 1 2 3 4 5 6

int main() {
  ll n;
  cin>>n;
  string s;
  cin >> s;
  bool ok=false;
  for (int i = 0; i < n-1; i++) {
    if (s[i] >s[i + 1]) {
      s.erase(s.begin()+i);
      ok=true;
      break;
    }
 }
 if(ok)
 cout<<s<<endl;
 else{
   for(int i=0;i<n-1;i++) cout<<s[i];
   cout<<endl;
 }
  


  }



