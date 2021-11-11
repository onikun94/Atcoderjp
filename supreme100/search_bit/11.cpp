#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  vector<vector<int>> s(M);
  for(int i = 0; i < M; ++i){
    int k; cin >> k;
    for(int j = 0; j < k; ++j){
      int a; cin >> a; --a;
      s[i].push_back(a);
    }
  }

  vector<int>p(M);
  for(int i = 0; i < M; ++i) cin >> p[i];

  long long res = 0;
  for(int bit = 0; bit < (1 << N); ++bit){
    cout << "----------------" << endl;
    bool ok = true;
    for(int i = 0; i < M; ++i){
      cout << "i = " << i << endl;
      int con = 0;
      for(auto v: s[i]){
        if(bit & (1<<v)){
          cout << "bit = " << bit <<"   v = " << v << "  " << (1 << v) << "   & = " <<(bit & (1<<v))<<endl;
          ++con;
        } ;
      }
      cout <<"con = " <<  con << endl;
      if(con % 2 !=p[i]) ok = false;
    }
    if(ok) ++res;
    cout << "res = " << res << endl;
  }
  cout << res << endl;
}