#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int N,M;
  cin >> N >> M;

  Graph G(N);//N*0の配列

  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
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