#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n ;
  cin>>n;
  int d=0, k=0;
  map<pair<int, int>,int> ans;
  char x;
  for(int i=0;i<n;i++) {
    cin>>x;
    if(x=='D')
      d++;
    else 
      k++;
    int x=d, y=k;
    int g =__gcd(d, k);
    x /= g;
    y /= g;
    ans[{x,y}]++;
    cout<<ans[{x,y}]<<" ";
  }
  cout<<"\n";
}

int main() {
  int t;
  cin>>t;
  while (t--)
    solve();
}
