  #include <bits/stdc++.h>
  #include <iostream>
  using namespace std;



  int main() {
    int n;
    cin>>n;
    string a, b;
    cin >> a >> b;
    int a_b = 0, b_a = 0;
    set<int>a1,a2;
    for (int i = 0; i < a.length(); i++) {
      if (a[i] == 'a' && b[i] == 'b') {
        a_b++;
      a1.insert(i+1);
      }
      else if(a[i]=='b'&& b[i]=='a') {b_a++;  a2.insert(i+1);}
    }
    if (a_b % 2 == 0 && b_a % 2 == 0){
      cout << a_b / 2 + b_a / 2 << "\n";
      while (!a1.empty()) {
        cout << *a1.begin() << " ";
        a1.erase(a1.begin());
        cout << *a1.begin() <<"\n";
        a1.erase(a1.begin());
      }
      while (!a2.empty()) {
        cout << *a2.begin() << " ";
        a2.erase(a2.begin());
        cout << *a2.begin() <<"\n";
        a2.erase(a2.begin());
        

    }


    }
    else if (a_b % 2) {
      if (b_a % 2 == 0) 
        cout << "-1\n";
      else {
        cout << a_b / 2 + b_a / 2 + 2 << "\n";
        while (a1.size()>1) {
        cout << *a1.begin() << " ";
        a1.erase(a1.begin());
        cout << *a1.begin() <<"\n";
        a1.erase(a1.begin());
        }
        while (a2.size()>1) {
        cout << *a2.begin() << " ";
        a2.erase(a2.begin());
        cout << *a2.begin() <<"\n";
        a2.erase(a2.begin());
        }
         cout<<*a1.begin()<<" "<<*a1.begin()<<"\n";
    cout<<*a1.begin()<<" "<<*a2.begin()<<"\n";

        
      
      }
    }
    else cout<<"-1\n";
  }

