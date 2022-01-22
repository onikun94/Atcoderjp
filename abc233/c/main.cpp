#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)
using Graph = vector<vector<ll>>;
Graph G;
vector<bool> seen;
ll n,x; 
ll ans;
void dfs(ll locate, ll mul){
  if(locate==n){
    if(mul == x)ans++;
    return;
  }
  for(ll c:G[locate]){
    if(mul > x/c)continue;
    dfs(locate+1,mul*c);
  }
}

int main(){
  cin >> n >> x;
  G.resize(n);
  REP(i,0,n){
    ll k; cin >> k;
    REP(j,0,k){
      ll v; cin >> v;
      G[i].push_back(v);
    }
  }
  dfs(0,1);
  cout << ans << endl;

  // REP(i,0,n){
  //   int d = G[i].size();
  //   REP(j,0,d){
  //     cout << G[i][j] << endl;
  //   }
  // }

}