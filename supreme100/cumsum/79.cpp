#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  int N,M,Q; cin >> N >> M >> Q;
  vector<vector<int>> train(501, vector<int>(501, 0));
  
  int L,R;
  REP(i,0,M){
    cin >> L >> R;
    train[L][R]++;
  } 

  REP(i,1, N+1){
    REP(j,2,N+1){
      train[i][j] += train[i][j-1]; 
    }
  }

  REP(_,0,Q){
    int p,q; cin >> p >> q;
    int ans = 0;
    REP(i,p,q+1) ans += train[i][q];
    cout << ans << endl;
  }
}