#include<bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0;i<n;i++)

void solve() {
  int n, i, x, ans=0;
  ll sum = 0;
  priority_queue<long long, vector<long long>, greater<long long> > pos;
  cin>>n;
  fo(i,n ) {
    cin>>x;
    sum += x;
    ans++;
    pos.push(x);
    while(sum<0) {
      sum -= pos.top();
			pos.pop();
      ans--;
    }
  }
  cout<<ans<<"\n";
}

int main() {
  int t;
  // cin>>t;
  t=1;
  while (t--) {
    solve();
  }
}