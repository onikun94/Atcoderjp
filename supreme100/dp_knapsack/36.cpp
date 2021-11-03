#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,W; cin >> N >> W;
  int value[110];
  int weight[110];
  int dp[110][10100];

  for(int i = 0; i < N; ++i){
    cin >> value[i] >> weight[i];
  }

  for(int w = 0; w < W; ++w){
    dp[0][w] = 0;
  }

  for(int i = 0; i < N; ++i){
    for(int w = 0; w <= W; ++w){
      if(w >= weight[i]) dp[i+1][w] = max(dp[i][w],dp[i+1][w-weight[i]]+value[i]);
      else dp[i+1][w] = dp[i][w];
    }
  }

  cout << dp[N][W] << endl;
}