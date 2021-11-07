#include <bits/stdc++.h>
using namespace std;

long  dp[30][110];
int main(){
  int N; cin >> N;
  int num[100];
  for(int i = 0; i <= 20; ++i){
    dp[0][i] = 0;
  }
  for(int i = 0; i < N; ++i){
    cin >> num[i];
  }
  dp[1][num[0]] = 1;
  for(int i = 1; i < N - 1; ++i){
    for(int j = 0; j <= 20; ++j){
      if(j+num[i] <=20) {
          dp[i+1][j+num[i]] += dp[i][j];
      }
      if(j-num[i] >=0){
          dp[i+1][j-num[i]] += dp[i][j];
      }
    }
  }
  //確認用
  // for(int i = 0; i < N; ++i){
  //   for(int j = 0; j <= 20; ++j){
  //     cout << dp[i][j] << " ";  
  //   }
  //   cout << "" << endl;
  //   cout << "num is" << num[i] << endl;
  // }

  cout << dp[N-1][num[N-1]] << endl;
  
}