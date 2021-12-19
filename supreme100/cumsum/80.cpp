#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  int H,W;
  ll K,V; 
  cin >> H >> W >> K >> V;
  vector<vector<ll>> A(H, vector<ll>(W));
  REP(i,0,H)REP(j,0,W) cin >> A[i][j]; 

  vector<vector<ll>> cumsum(H+1, vector<ll>(W+1, 0));
  REP(i,0,H)REP(j,0,W) cumsum[i+1][j+1] = cumsum[i][j+1] + cumsum[i+1][j] - cumsum[i][j] + A[i][j];

  ll S = 0;
  ll cost = 0;
  ll ans = 0;
  REP(i,0,H){
    REP(j,0,W){
      REP(k,i+1,H+1){
        REP(l,j+1,W+1){
          S = (k - i) * (l - j);
          cost = (cumsum[k][l] -cumsum[i][l] - cumsum[k][j] + cumsum[i][j]) + K*S;
          if(cost <= V) ans = max(ans,S);
        }
      }
    }
  }
  cout << ans << endl;
}