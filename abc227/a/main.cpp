#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  int N,K,A; cin >> N >> K >> A;
  int ans = (A+K-1) % N;
  if(ans == 0) ans = N;
  cout << ans << endl;

}