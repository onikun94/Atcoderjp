#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)
vector<int> S(100);
int main(){
  int N; cin >> N;
  REP(i,0,N) cin >> S[i];
  int count = 0;
  REP(i,0,N){
    bool match = false;
    REP(a,1,1000){
      REP(b,1,1000){
        int area = 4*a*b+3*a+3*b;
        if(S[i] == area){
          match = true;
        }   
      }
    }
    if(match)match =false;
    else{
      count++;
      match = false;
    } 
  }
  cout << count << endl;
}