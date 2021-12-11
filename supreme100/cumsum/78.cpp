#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  int M,N; cin >> M >> N;
  int K; cin >> K;
  vector<vector<char>> a(M, vector<char>(N));
  REP(i,0,M)REP(j,0,N)cin >> a[i][j];

  vector<vector<int>> ju(1100, vector<int>(1100, 0));
  vector<vector<int>> oc(1100, vector<int>(1100, 0));
  vector<vector<int>> ice(1100, vector<int>(1100, 0));

  REP(i,0,M)REP(j,0,N){
    if(a[i][j] == 'J') ju[i+1][j+1] = ju[i][j+1]+ju[i+1][j] - ju[i][j] + 1 ;
    else ju[i+1][j+1] = ju[i][j+1]+ju[i+1][j] - ju[i][j]; 
    if(a[i][j] == 'O') oc[i+1][j+1] = oc[i][j+1]+oc[i+1][j] - oc[i][j] + 1;
    else oc[i+1][j+1] = oc[i][j+1]+oc[i+1][j] - oc[i][j]; 
    if(a[i][j] == 'I') ice[i+1][j+1] = ice[i][j+1]+ice[i+1][j] - ice[i][j] + 1;
    else ice[i+1][j+1] = ice[i][j+1]+ice[i+1][j] - ice[i][j]; 
  }

  REP(i,0,K){
    int x1,x2,y1,y2; cin >> x1 >> y1 >> x2 >> y2;
    int juAns = ju[x2][y2] - ju[x1-1][y2] - ju[x2][y1-1] + ju[x1-1][y1-1];
    int ocAns = oc[x2][y2] - oc[x1-1][y2] - oc[x2][y1-1] + oc[x1-1][y1-1];
    int iceAns = ice[x2][y2] - ice[x1-1][y2] - ice[x2][y1-1] + ice[x1-1][y1-1];
    cout << juAns << " " << ocAns << " " << iceAns  << endl;
  }
}