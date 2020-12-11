        #include <bits/stdc++.h>
    #include <iostream>
    # define ll long long
    #define watch(x) cout << (#x) << " is " << (x) << endl
    #define bolt ios::sync_with_stdio(0)
        #define light cin.tie(0);cout.tie(0)
    ll Ceil(ll a, ll b) { return ((a / b) + (a % b != 0)); }
    using namespace std;
    
    bool check(int i,int j,int n,int m,int s) {
    if ((i >= 0 && i < n) && (j >= 0 && j < m)  ) {

        return true;
    }
    else return false;
    }

    int main() {
    ll t;
    bolt;
    light;
    cin >> t;
    
    while(t--){
            ll n, m;
            cin >> n >> m;
            bool dp[n + 1][m + 1][(m+1)/2];
            memset(dp,false,sizeof(dp));
            
            vector<string> v;
            for (int i = 0; i < n; i++) {
            string s;
            cin>>s;
            v.push_back(s);
            }
            int ans=0;
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
                for (int j = 0; j < m; j++) {
                if (i - 1 >= 0 && dp[i - 1][j][s - 1] > 0) {
                
                if (check(i,j-1,n,m,s-1)&& check(i,j+1,n,m,s-1) && v[i][j]=='*'&&dp[i][j-1][s-1]==1 && dp[i][j+1][s-1]==1)  {
                    
                    
                    dp[i][j][s]=1;
                    ans++;
                }
                    }

                }

            }
            }
        
        
        
    cout<<ans<<endl;
    }
            }
        

