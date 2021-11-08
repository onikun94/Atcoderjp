#include <bits/stdc++.h>
using namespace std;
int main(){
  int MOD = pow(10,4);
  int N,K; cin >> N >> K;
  int Pasta[N];
  memset(Pasta,0,sizeof(Pasta));
  int a,b;
  for(int i = 0; i < K; ++i){
    cin >> a >> b;
    Pasta[a-1] = b;
  }
  int dp[101][4][4];
  memset(dp,0,sizeof(dp));
  dp[0][0][0] = 1;
  //O(N^4) but 100*4^3 = 6400
  for(int n = 0; n < N; ++n){
    for(int i = 0; i < 4; ++i){
      for(int j = 0; j < 4; ++j){
        for(int k = 1; k < 4; ++k){
          if(Pasta[n] != 0 && Pasta[n] != k) continue;
          if(k != i || i != j){
            dp[n+1][k][i] += dp[n][i][j];
            dp[n+1][k][i] %= MOD;
          }
        }
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 4; ++j){
      ans += dp[N][i][j];
      ans %= MOD;
    }
  }
  cout << ans << endl;
}