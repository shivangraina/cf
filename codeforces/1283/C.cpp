#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
# define MAXX 10000000000000

int main() {

  // out [i]=v[i]
  // in [v[i]]=i
  ll n;
  cin >> n;
  vector<ll> in(200005, -1);
  vector<ll> out(200005, -1);
  for (int i = 1; i <= n; i++) {
    ll e;
    cin >> e;
    if(e!=0){
    out[i] = e;
    in[e] = i;
    }
  }
  vector<ll>a,b;
  for (int i = 1; i <= n; i++) {
    if (in[i] ==-1)
      a.push_back(i);
    if (out[i] == -1)
      b.push_back(i);

  }

  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  int trouble=-1;
  for (int i = 0; i < a.size(); i++) {
    out[b[i]] = a[i];
    if(b[i]==a[i])
 trouble=i;
  }
  if(trouble!=-1){
  for (int i = 0; i < a.size(); i++) {
    if (i != trouble) {
      swap(out[b[trouble]], out[b[i]]);
      break;
    }
  }
  }
  for (int i = 1; i <= n; i++)
    cout << out[i] << " ";
  cout<<"\n";


  
}

