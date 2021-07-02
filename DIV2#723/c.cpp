#include<bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0; i<n; i++)
ll inf = 1e18;
void solve() {
  int n, x, i;
  cin>>n;
  ll a[n];
  fo(i,n) cin>>a[i];
  vector<vector<ll>> dp(n+1, vector<ll>(n+1,-(inf)));
  fo(i, n+1) dp[i][0] = 0;

  for(int i=1; i<n+1; i++)
    for(int j=1; j<=i; j++)
      if(dp[i-1][j-1] + a[i-1]>=0)
        dp[i][j] = max(dp[i-1][j-1] + a[i-1], dp[i-1][j]);
      else
        dp[i][j] = dp[i-1][j];

    int ans = 0;
    for( int i=n; i>=1 ; i--)
      if(dp[n][i]>=0) {
        ans = i;
        break;
      }
    cout<<ans<<"\n";
}

int main() {
  int t;
  // cin>>t;
  t = 1;
  while (t--) {
    solve();
  }
}
