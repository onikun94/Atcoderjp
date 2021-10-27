#include <iostream>
#include <cstring>
using namespace std;

int n,X,Y;
int A[300],B[300];
bool dp[400][400][400];

int main(){
  cin >> n >> X >> Y;
  for(int i = 0; i < n; ++i){
    cin >> A[i] >> B[i];
  }
  memset(dp,0,sizeof(dp));
  dp[0][0][0] = true;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j <= X; ++j){
      for(int k = 0; k <= Y; ++k){
        dp[i+1][j][k] |= dp[i][j][k];
        if(j >= A[i] && k >= B[i]) dp[i+1][j][k] |= dp[i][j-A[i]][k-B[i]];
      }
    }
  }

  if(dp[n][X][Y]) cout << "Yes" << endl;
  else cout << "No" << endl;
}