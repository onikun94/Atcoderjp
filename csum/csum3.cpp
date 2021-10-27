#include <iostream>
#include <vector>
using namespace std;

int main(){
  int MAX = 101010;
  vector<int> ac(MAX,0);
  vector<int> S(MAX+1, 0);

  int N, Q;  cin >> N >> Q;
  string a; cin >> a;

  

  for(int i = 1; i < N; ++i){
    if (a[i-1] == 'A' && a[i] == 'C'){
      ac[i] = 1;
    }
  }

  // 累積和
  for(int i = 0; i < N; ++i){
    S[i+1] = S[i] + ac[i];
  }
  for(int i = 0; i < Q; ++i){
    int l, r;
    cin >> l >> r;
    cout << S[r] - S[l] << endl;

  }

}