  #include <bits/stdc++.h>
  #include <iostream>
  using namespace std;



  int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int s = 0;
    vector<int>p,ne,z;
   
    for (int i = 1; i <= n; i++) {
      int e;
      cin >> e;
      if (e > 0) {
        p.push_back(e);
      } else if (e < 0)
        ne.push_back(e);
      else z.push_back(e);
      s += e;
    }
    if (s == 0)
      cout << "NO";
    else if (s < 0) {
      cout<<"YES\n";
      for (int i = 0; i < ne.size(); i++) {
        cout<<ne[i]<<" ";
      }
      for (int i = 0; i < z.size(); i++) {
        cout<<z[i]<<" ";
      }
       for (int i = 0; i < p.size(); i++) {
        cout<<p[i]<<" ";
      }
    } else {
       cout<<"YES\n";
      for (int i = 0; i < p.size(); i++) {
        cout<<p[i]<<" ";
      }
      for (int i = 0; i < z.size(); i++) {
        cout<<z[i]<<" ";
      }
       for (int i = 0; i < ne.size(); i++) {
        cout<<ne[i]<<" ";
      }
      
    }
     cout<<"\n";
    }
    
  }

