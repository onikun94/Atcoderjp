#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n,m; cin >> n >> m;
  vector<int>s(n);
  vector<int>move(m);
  for(int i = 0; i < n-1; ++i){
    cin >> s[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> move[i];
  }
  vector<int>cumsum(n,0);
  for(int i = 0; i < n-1; ++i){
    cumsum[i+1] = cumsum[i] + s[i];
  }

  ll sum = 0;
  int moBe = 0;
  int moAf = 0;
  for(int i = 0; i < m; ++i){
    moBe += move[i];
    sum += abs(cumsum[moBe] -cumsum[moAf]) % 100000;
    moAf += move[i];
    
  }
  cout << sum % 100000 << endl;
}