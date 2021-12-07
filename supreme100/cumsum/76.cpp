#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  int N; cin >> N;
  vector<ll> a(N);
  for(int i = 0; i < N; ++i){
    cin >> a[i];
  }
  vector<ll> s(N+1,0);
  for(int i = 0; i < N; ++i){
    s[i+1] = s[i] + a[i];
  }

  for(int k = 1; k <= N; ++k){
    ll res = 0;
    for(int i = 0; i + k <= N; ++i) res = max(res, s[i+k] -s[i]);
    cout << res << endl;
  }
 
}