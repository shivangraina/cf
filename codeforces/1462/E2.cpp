          #include <algorithm>
#include <bits/stdc++.h>
    #include <iostream>
#define ll long long
#define MOD 1000000007
    #define watch(x) cout << (#x) << " is " << (x) << endl
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
ll fpow(ll n, ll k, ll p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
    using namespace std;
    long long modInverse(long long n, ll p)
{
	return fpow(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
long long fac[200005];
 
 
long long ncr(long long n, ll r, ll p)
{
	// If n<r, then nCr should return 0
	if (n < r)
		return 0;
	// Base case
	if (r == 0)
		return 1;
	return (fac[n] * modInverse(fac[r], p) % p
	        * modInverse(fac[n - r], p) % p)
	       % p;}



          int main() {
            ll t;
            cin >> t;
            fac[0] = 1;
	for (int i = 1; i <= 200005; i++)
		fac[i] = (fac[i - 1] * i) % MOD;
            while (t--) {
              ll n,m,k;
              cin>>n>>m>>k;
              vector<ll> v(n);
              for (auto &a : v)
                cin >> a;
              sort(v.begin(), v.end());
              ll ans=0;
              for (int i = 0; i < n; i++) {
                ll l = upper_bound(v.begin(), v.end(), v[i] + k) - v.begin();
                ll a = l - (i + 1);

                 
                ans=(ans+ncr(a,m-1,MOD))%MOD;
              }
            cout<<ans<<endl;
            }
          }

