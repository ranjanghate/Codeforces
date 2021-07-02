#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n ;
  cin>>n;
  set<int> s;
  int a[n];
  for(int i=0; i<n; i++)
    cin>>a[i];
  s.insert(a[0]);

  for(int i=1; i<n ; i++) {
    int prev = a[i-1];
    if(prev!=a[i]) {
      if (prev < a[i]) {
          auto it = s.upper_bound(prev);
          if (it != s.end() && (*it < a[i])) {
            cout<<"No\n";
            return;
          }
      }
      if (prev > a[i]) {
          auto it = s.lower_bound(prev);
          if (it != s.begin() && (*(--it) > a[i])) {
            cout<<"No\n";
            return;
          }
      }
    }
    s.insert(a[i]);
  }
  cout<<"Yes\n";
}

int main() {
  int t;
  cin>>t;
  while (t--)
    solve();
}
