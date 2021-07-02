#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n ;
  cin>>n;
  int a[n];
  int neg = 0;
  for(int i=0; i<n; i++) {
    cin>>a[i];
    if(a[i]<0)
      neg++;
  }
  if(neg>0) {
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  cout<<101<<"\n";
  for(int i=0; i<=100 ; i++)
    cout<<i<<" ";
  cout<<"\n";
}

int main() {
  int t;
  cin>>t;
  while (t--)
    solve();
}
