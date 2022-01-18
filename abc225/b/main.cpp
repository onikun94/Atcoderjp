#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)
using Graph = vector<vector<int>>;


int main(){
  int N;cin >> N;
  Graph g(N+1);
  REP(i,0,N-1){
    int a,b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  bool ans = false;
  REP(i,0,N){
    int d = g[i+1].size();
    if(d == 1)continue;
    else if(d == (N-1)){
     cout << "Yes" << endl;
     return 0; 
    }
  }
  cout << "No" << endl;

}