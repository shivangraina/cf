        #include <bits/stdc++.h>

        #include <iostream>

        # define ll long long
        #define watch(x) cout << (#x) << " is " << (x) << endl
        ll Ceil(ll a, ll b) {
          return ((a / b) + (a % b != 0));
        }
        # define MAXX 10000000000000000
        using namespace std;
        // dp[no of right moves][no of left moves][is left move]
        map<int,map<int,map<int,int>>>dp;
      
        ll n, k, z;

        ll fun(int no_of_right_moves, int no_of_left_moves,
               int is_prev_left_move, vector<ll> &v) {
           ll a=0,b=0;
           if (dp[no_of_right_moves][no_of_left_moves][is_prev_left_move] >0)
             return dp[no_of_right_moves][no_of_left_moves][is_prev_left_move];
           
           
            if (no_of_left_moves +no_of_right_moves+1 <= k) {
              a = fun(no_of_right_moves + 1, no_of_left_moves, 0, v) +
                  v[no_of_right_moves-no_of_left_moves + 1];

              if (no_of_left_moves < z &&
                  no_of_right_moves - no_of_left_moves - 1 >= 0 && !is_prev_left_move) {
                       b=fun(no_of_right_moves,no_of_left_moves+1,1,v)+ v[no_of_right_moves-no_of_left_moves-1];
                   }
              
             }
        
             
             return dp[no_of_right_moves][no_of_left_moves][is_prev_left_move]=max(a,b);
          
        }

        int main() {
          ll t;
          cin >> t;
          while (t--) {
            cin >> n >> k >> z;
              dp.clear();
            vector < ll > v(n);
            for (auto & a: v)
              cin >> a;
            cout << fun(0, 0, 0, v) + v[0] << "\n";

          }
        }