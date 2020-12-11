      #include <bits/stdc++.h>
#include <iostream>
# define ll long long
#define watch(x) cout << (#x) << " is " << (x) << endl
ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
using namespace std;
    bool dp[501][501][251];
bool check(int i,int j,int n,int m,int s) {
  if ((i >= 0 && i < n) && (j >= 0 && j < m) && dp[i][j][s]>0)
    return true;
  else return false;
}
#define bolt ios::sync_with_stdio(0)
 #define light cin.tie(0);cout.tie(0)

int main() {
  ll t;
  bolt;
  light;
  cin >> t;
  while(t--){
        ll n, m;
        cin >> n >> m;
    
        memset(dp,0,sizeof(dp));
        vector<string> v;
        for (int i = 0; i < n; i++) {
          string s;
          cin>>s;
          v.push_back(s);
        }
        ll ans=0;
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
            if (v[i][j] == '*') {
              dp[i][j][1] = 1;
              ans++;
            }
          }
        }

        for (int s = 2; s <= (m+1)/2; s++) {
          for (int i = 0; i < n; i++) {
            for(int j=0;j<m;j++){
              if (check(i,j-1,n,m,s-1)&& check(i,j+1,n,m,s-1) &&check(i - 1, j , n, m,s-1)&& v[i][j]=='*') {
                dp[i][j][s] = 1;
                ans++;
              }

            }

          }
        }
       
       
  cout<<ans<<endl;
  }
        }
      

