#include<bits/stdc++.h>
using namespace std;
 
#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0;i<n;i++)
#define fos(i, s, n) for(i=s;i<n;i++)

bool check [1100];
void solve() {
  ll n;
  cin>>n;
  if(n>1099) {
    cout<<"YES\n";
    return;
  }
  if(check[n])  cout<<"YES\n";
  else cout<<"NO\n";
}

int main() {
  memset(check, false, sizeof check);
  for(ll i=11; i<1100; i++) {
    ll start = 11;
    while(start<=i) {
      if(start==i) {
        check[i] = true;
        break;
      }
      ll temp = i;
      if(check[temp-start]) {
        check[i] = true ;
        break;
      }
      start = start*10 + 1;
    }
  }

  int t;
  cin>>t;
  while (t--) {
    solve();
  }
}