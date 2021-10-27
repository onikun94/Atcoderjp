#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int MOD = 1000000009;

int n,A;
int a[110];

int dp[110][10010];

int main(){
  cin >> n >> A;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  memset(dp, 0, sizeof(dp));
  dp[0][0] = 1;

  for(int i = 0; i< n; i++){
    for(int j = 0; j <=A; j++){
      (dp[i+1][j] += dp[i][j]) % MOD;
      if(j >= a[i]){
        (dp[i+1][j] += dp[i][j-a[i]]) %= MOD;
      }
    }
  }
  cout << dp[n][A] << endl;
}