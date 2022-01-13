#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  int N; cin >> N;
  if( N >= 1 && N <= 9)cout << "AGC00" << N << endl;
  else if( N >= 10 && N <= 41) cout << "AGC0" << N << endl;
  else if (N >=42) cout << "AGC0" << N+1 << endl;
}
