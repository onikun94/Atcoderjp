#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
  int R,C; cin >> R >> C;
  int sy,sx; cin >> sy >> sx; sx--; sy--;
  int gy,gx; cin >> gy >> gx; gx--; gy--;
  

  vector<string> field(R);
  for(int h = 0; h < R; ++h) cin >> field[h];

  vector<vector<int>> dist(R,vector<int>(C,-1));
  dist[sy][sx] = 0;
  queue<pair<int,int>> que;
  que.push(make_pair(sx,sy));

  while(!que.empty()){
    pair<int,int> current_pos = que.front();
    int x = current_pos.first;
    int y = current_pos.second;
    que.pop();

    for(int direction = 0; direction < 4; ++direction){
      int next_x = x+dx[direction];
      int next_y = y+dy[direction];
      if(next_x < 0 || next_x >= C || next_y < 0 || next_y >= R) continue;
      if(field[next_y][next_x] == '#')continue;

      if(dist[next_y][next_x] == -1){
        que.push(make_pair(next_x,next_y));
        dist[next_y][next_x] = dist[y][x] + 1;
      }
    }
  }

  cout << dist[gy][gx] << endl;
}