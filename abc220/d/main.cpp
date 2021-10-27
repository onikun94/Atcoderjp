#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
using mint = modint998244353;

signed main(){
  ll n;
  cin >> n;
  vector<ll>a(n+1);
  for(ll i=1; i <=n;i++) cin >> a[i];
  mint dp[n+1][10]; memset(dp,0,sizeof(dp));
  dp[1][a[1]] = 1;
  for(ll i=1; i<=n-1; i++){
    for(ll j=0; j<=9; j++){
      dp[i+1][(j+a[i+1])%10] += dp[i][j];
      dp[i+1][(j*a[i+1])%10] += dp[i][j];
    }
  } 
  for(ll K=0; K<=9; K++){
    cout << dp[n][K].val() << endl;
  }

  return 0;

}