#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL<<60;

int main(){
  int N,K;
  while(cin >> N >> K){
    if(N == 0) break;
    vector<long long> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    vector<int> s(N+1,0);
    for(int i = 0; i < N; ++i) s[i+1] = s[i] + a[i];

    long long res = -INF;
    for(int i = 0; i <= N;-K; ++i){
      long long val = s[K+i] - s[i];
      if(res < val) res = val;
    }
    cout << res << endl;
  }
}