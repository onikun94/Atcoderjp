#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)


int main(){
  string S;cin >> S;
  string T; T = "oxxoxxoxxoxx";
  if(T.find(S) != string::npos)cout << "Yes" << endl;
  else cout << "No" << endl;
}