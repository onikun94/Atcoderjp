#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int N,M; cin >> N >> M;

  Graph G(N);
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while(!que.empty()){
    int v = que.front();
    que.pop();

    for(int nv: G[v]){
      cout << "nv is" << nv << "v is"<< v << endl;
      if(dist[nv] != -1)continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  for(int v = 0; v< N; v++){
    cout << v << ":" << dist[v] << endl;
  }


  for(int i =0; i < N; i++){
    if(G[i].size() > 0){
      cout << i  << "= " << "{";
      for(int j = 0; j < G[i].size() ; j++){
        cout << G[i][j] << "," ;
      }
      cout << "}"<< endl;
    }else{
      cout << i  << "= " << "{}" << endl;
    }
  }
}