#include <bits/stdc++.h>
using namespace std;

int main(){
  while(true){
    int n,x; cin >> n >> x;
    if(n == 0 && x == 0) break;
    int count = 0;
    int ans = 0;
    for(int i = 1; i < n+1; ++i){
      for(int j = i+1; j < n+1; ++j){
        for(int k = j+1; k < n+1; ++k){
          ans = i + j + k;
          if(ans == x) count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}