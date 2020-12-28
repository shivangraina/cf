#include <bits/stdc++.h>
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
  string s;
  cin >> s;
  if (s.length() % 2)
    cout << "NO\n";
  else if (s[0] == ')' || s[s.length() - 1] == '(')
    cout << "NO\n";
  else cout<<"YES\n";
}
}