#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int v){
  seen[v] = true;

  //normal
  for(auto next_v: G[v]){
    cout << "now is" << next_v << endl;
    if(seen[next_v]){
      dfs(G,next_v);
    }
  }


}

int main(){
  int N, M;
  cin >> N >> M;

  Graph G(N);

  //G[hoge]:hogeが出発地点
  //push_back(hoo):hooが到着地点　で辺を作成
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(N,false);
  dfs(G,0);//第2引数地点についてすべて調べる
 

  for(int i = 0; i < N; i++){
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