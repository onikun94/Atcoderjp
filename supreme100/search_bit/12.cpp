#include <bits/stdc++.h>
using namespace std;
int N,M;
int group[12];
int G[12][12];

int main(){
  cin >> N >> M;
  for(int i = 0; i < N; ++i){
    G[i][i] = 1;//同一人物に対しての埋め
  }
  for(int i = 0; i < M; ++i){
    int x,y; cin >> x >> y; x--; y--;
    G[x][y] = 1;
    G[y][x] = 1; //無向グラフ
  }
  
  int ans = 0;

  for(int bit = 0; bit < (1 << N); ++bit){
    int cnt = 0;
    bool ok = true;
    vector<int> b(N);
    for(int i = 0; i < N; ++i){
      if((bit >> i) & 1){
        cout << "bit = " << bit << " cnt = " << cnt << " i =" << i << endl;
        b[cnt] = i; 
        cnt++;
      }
    }

    
    

  //   for(int k = 0; k < cnt; ++k){
  //     for(int l = 0; l < cnt; ++l){
          //同じ人同士を除外
  //       if(b[k] == b[l]){
  //         continue;
  //       }
          //入力された関係がないものを除外
  //       if(G[b[k]][b[l]] != 1){
  //         ok = false;
  //         break;
  //       }
  //     }
  //   }
  //   if(ok){
  //     ans = max(ans,cnt);
  //   }
  }
  cout << ans << endl;

}