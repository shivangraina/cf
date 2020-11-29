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
    ll n, m, a, b;
    cin>>n>>m>>a>>b;
    cout<<max({a-1+b-1,n-a+m-b,n-a+b-1,m-b+a-1})<<"\n";
  }
}


