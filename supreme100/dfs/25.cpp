#include <bits/stdc++.h>
using namespace std;

int w,h; 

vector<vector<int>> field;
vector<vector<int>> seen;
void dfs(int sx, int sy){
  seen[sy][sx] = 1;
  for(int dx = -1; dx <= 1; ++dx){
    for(int dy = -1; dy <= 1; ++dy){
      int ny = sy + dy;
      int nx = sx + dx;
      if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      if( field[ny][nx] == 0) continue;
      if(seen[ny][nx]) continue;
      dfs(nx,ny);
    }
  }
}

int main(){
  while(true){
    cin >> w >> h;
    if(w == 0 && h == 0) break;
    field.assign(h,vector<int>(w,0));
    seen.assign(h,vector<int>(w,0));
    
    for(int y = 0; y < h; ++y){
      for(int x = 0; x < w; ++x){
        int c; cin >> c;
        field[y][x] = c;
      }
    }

    int count = 0;
    for(int y = 0; y < h; ++y){
      for(int x = 0; x < w; ++x){
        if(seen[y][x] || field[y][x] == 0) continue;
        dfs(x,y);
        count++;
      }
    }
    cout << count << endl;
  }

}