#include <bits/stdc++.h>
using namespace std;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
  int H,W,N; cin >> H >> W >> N;
  vector<string> field(H);
  for(int i = 0; i < H; ++i){
    cin >> field[i];
  } 
  
  int sx = 0;
  int sy = 0;
  //search start position
  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      if(field[i][j] == 'S') {
        sy = i;
        sx = j;
      }
    }
  }

  int max = 0;
  int gx = 0;
  int gy = 0;
  
  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      if(field[i][j] == '1' || field[i][j] == '2'|| field[i][j] == '3' || field[i][j] == '4'||field[i][j] == '5' || field[i][j] == '6'||field[i][j] == '7' || field[i][j] == '8'||field[i][j] == '9'){
        int num = field[i][j] - '0';
        if(num > max){
          max = num;
          gy = i;
          gx = j;
        }
      }
    }
  }


  vector<vector<int>> dist(H,vector<int>(W,-1));
  vector<vector<int>> po(H,vector<int>(W,-1));
  queue<pair<int,int>> que;
  dist[sy][sx] = 0;
  po[sy][sx] = 0;

  que.push(make_pair(sy,sx));
  int power = 1;
  int count = 0;
  while(!que.empty()){
    pair<int,int> current_position = que.front();
    int y = current_position.first;
    int x = current_position.second;
    que.pop();

    for(int i = 0; i < 4; ++i){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
      if(field[ny][nx] == 'X') continue;
      if(power < (field[ny][nx] - '0')) continue;
      
      if(power == (field[ny][nx] - '0')){
        power++;
        cout << ny << "," << nx << endl;
      } 

      if(field[ny][nx] == '.' || field[ny][nx] == '1' || field[ny][nx] == '2' || field[ny][nx] == '3'||field[ny][nx] == '4' || field[ny][nx] == '5'||field[ny][nx] == '6' || field[ny][nx] == '7' || field[ny][nx] == '8' || field[ny][nx] == '9'){
        que.push(make_pair(ny,nx));
        dist[ny][nx] = dist[y][x] + 1;
      }

      cout << "power = "<< power << endl;
      if(power == 1){
        for(int i = 0; i < H; ++i){
          for(int j = 0; j < W; ++j){
            cout << dist[i][j] << " ";
          }
          cout << "" << endl;
        } 
      }
      
      // if(ny + 1 == gy && nx + 1 == gx)  break;
      
    }

    // count ++;
    if(power > max){
          cout << "break" << endl;
          break;
    }
     
  }

  cout << "========================" << endl;
  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      cout << dist[i][j] << " ";
    }
    cout << "" << endl;
  }
  cout << dist[gy][gx] << endl;
  //   cout << "num = " << max << endl;
  // cout << "goal = " <<gy << " " << gx << endl;
  // cout << "start = " << sy << " " << sx << endl;



}