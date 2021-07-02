#include<bits/stdc++.h>
using namespace std;

vector<string> s;
void solve() {
  int n ;
  cin>>n;
  string in;
  cin>>in;
  int i=0;
  while(in.find(s[i])!= string::npos)
    i++;
  cout<<s[i]<<"\n";
}

int main() {
  for(char p='a'; p<='z';p++) {
    string temp;
    temp.push_back(p);
    s.push_back(temp);
  }
  for(int i=0;i<26;i++)
    for(char q='a'; q<='z';q++) {
      string temp="";
      temp+=q;
      s.push_back(s[i]+temp);
    }

  for(int i=26;i<26*26;i++)
    for(char q='a'; q<='z';q++) {
      string temp="";
      temp+=q;
      s.push_back(s[i]+temp);
    }
  int t;
  cin>>t;
  while (t--)
    solve();
}
