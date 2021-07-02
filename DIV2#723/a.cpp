#include<bits/stdc++.h>
using namespace std;
 
#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0;i<n;i++)
#define fos(i, s, n) for(i=s;i<n;i++)
 
void solve() {
  int n, i;
  cin>>n;
  int a[2*n], b[n];
  fo(i,2*n) cin>>a[i];
  sort(a, a+2*n);
  fo(i,n) cout<<a[i]<<" "<<a[n+i]<<" ";
  cout<<"\n";
}
 
int main() {
  int t;
  cin>>t;
  while (t--) {
    solve();
  }
}
