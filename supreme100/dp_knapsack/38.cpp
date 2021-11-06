#include <bits/stdc++.h>
using namespace std;

int main(){
  const int INF = 1 << 29;
  int q; cin >> q;
  vector<string> X(q),Y(q);

  int dp[1010][1010];

  for(int qu = 0; qu < q; ++qu){
    cin >> X[qu] >> Y[qu];
  }

  for(int qu = 0; qu < q; ++qu){
    memset(dp,0,sizeof(dp));
    for(int i = 0; i < X[qu].size(); ++i){
      for(int j = 0; j < Y[qu].size(); ++j){
        if(X[qu][i] == Y[qu][j]) dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j]+1);
        dp[i+1][j+1] = max(dp[i+1][j+1],dp[i+1][j]);
        dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
      }
    }
    // 確認用
    for(int i = 0; i <= X[qu].size(); ++i){
      for(int j = 0; j <= Y[qu].size(); ++j){
        cout << dp[i][j] << " ";
      }
      cout << "" << endl;
    }
    cout << dp[X[qu].size()][Y[qu].size()] << endl;
  }

  
  

}