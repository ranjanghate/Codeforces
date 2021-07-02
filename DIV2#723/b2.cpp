#include<bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define pb push_back
#define fo(i, n) for(i=0;i<n;i++)

void solve() {
  ll x;
  cin>>x;
  bool ans = false;
  int d=0, a=0;
  while(d<11) {
    if((x-d*111)%11==0) {
      ll temp ;
      temp = x - d*111;
      if (temp<0) {
        cout<<"NO\n";
        return;
      }
      temp /= 11 ;
      while(a<111) {
        if((temp-a)%111==0) {
          ll temp1 = temp-a;
          if (temp1<0) {
            cout<<"NO\n";
            return;
          }
          cout<<"YES\n";
          return;
        }
        a++;
      }

    }
    d++;
  }

  cout<<"NO\n";
}

int main() {
  int t;
  cin>>t;
  while (t--) {
    solve();
  }
}