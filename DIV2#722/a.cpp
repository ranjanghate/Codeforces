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
  int a[n];
  fo(i, n) cin>>a[i];
  sort(a, a+n);
  int ans=1; 
  for(int i=0 ; i<n-1 ; i++)
    if(a[i]==a[i+1])
      ans++;
    else
      break;
  cout<<n-ans<<"\n";
}

int main() {
  int t;
  cin>>t;
  while (t--) {
    solve();
  }
}