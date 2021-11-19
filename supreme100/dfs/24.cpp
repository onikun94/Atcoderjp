#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<int> dist(100,0);
vector<int> finish(100,0);
int st = 0;

vector<bool> seen;
void dfs(const Graph &G, int v){
  seen[v] =true;
  st++;
  dist[v] = st;
  for(auto next_v : G[v]){
    if(seen[next_v]) continue;
    dfs(G,next_v);
  }
  //ある1つの頂点の隣接リストをすべて調べ終えるとここに移動する.
  st++;
  finish[v] = st;
}

int main(){
  int N; cin >> N;
  Graph G(N);
  for(int i = 0; i < N; ++i){
    int u,k; cin >> u >> k;
    for(int j = 0; j < k; ++j){
      int v; cin >> v;
      G[u-1].push_back(v-1);
    }
  }

  seen.assign(N,false);
  dfs(G,0);
  //未探索があった場合
  for(int i = 0; i < N; ++i){
    if(seen[i] == false) dfs(G,i);
  }

  //各頂点の発見時刻とその頂点の隣接リストを調べ終えた時刻
  for(int i = 0; i < N; ++i){
    cout << i+1 <<" " << dist[i] <<" " <<finish[i] << endl;
  }

}