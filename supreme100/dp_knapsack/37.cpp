#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> c(m);
  int dp[110][50050];

  for(int i = 0; i < m; i++){
    cin >> c[i];
  }
  for(int i = 0; i <= n; i++){
    dp[0][i] = 10010 ;
  }
  for(int i = 0; i <= m; i++){
    dp[i][0] = 0;
  }

  for(int i = 0; i <= m; ++i){
    for(int yen = 0; yen <= n; ++yen ){
      if(yen >= c[i]){
        dp[i+1][yen] = min(dp[i+1][yen - c[i]] + 1, dp[i][yen]); 
      }else{
        dp[i+1][yen] = dp[i][yen];
      }
    }
  }

  cout << dp[m][n] << endl;
}