#include<bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0;i<n;i++)
#define foi(i, in, n) for(i=in;i<n;i++)

void solve() {
  int n, x, i;
  cin>>n;
  vector<ll> neg;
  vector<ll> pos;
    
  for(int i=0 ;i<n ; i++) {
    cin>>x;
    if(x>0) 
      pos.pb(x);
    else
      neg.pb(x);
  }
  sort(neg.begin(), neg.end());

  ll mind = 1e18;
  int c = neg.size();
  for(int i=0 ; i<c-1; i++)
    mind = mind > labs(neg[i]-neg[i+1]) ? labs(neg[i]-neg[i+1]) : mind ;

  if(c!=n) {
    ll mn = pos[pos.size()-1] ;
    for(auto e:pos)
      mn = min(mn,e);
    if(mind>=mn)
      c++;
  }
  
  cout<<c<<"\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while (t--) {
    solve();
  }
}