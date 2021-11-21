#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int N,Q;
vector<int> q;
vector<int> x;
vector<int> counter;

//1つずつ足していく方法だとN個の要素に対して配列のq番目に足すという走査をQ回繰り返すので
//計算量はO(NQ)
void dfs(const Graph &G, int v, int cnt){
  counter[v] += cnt;
  for(auto nv: G[v]){
    dfs(G,nv,cnt);
  }
}


int main(){
  cin >> N >> Q;
  Graph G(N+1);
  counter.assign(N+1,0);
  q.assign(Q,0);
  x.assign(Q,0);
 
  for(int i = 0; i < N-1; ++i){
    int a,b; cin >> a >> b;
    G[a].push_back(b);
  }
  for(int i = 0; i < Q; ++i){
    cin >> q[i] >> x[i];
  } 


  for(int i = 0; i < Q; ++i){
    dfs(G,q[i],x[i]);
  }
  
  for(int i = 1; i < N+1; ++i){
    cout << counter[i] << endl;
  }

}