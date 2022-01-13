#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define REP(i,x,y) for(ll i = (ll)x; i < (ll)y; ++i)

int main(){
  ll n,a,b;
  ll p,q,r,s;
  ll x,y;
  string str = "";
  vector<string> ans;
  cin >> n >> a >> b;
  cin >> p >> q >> r >> s;
  REP(i,0,(s-r+1))str+='.';
  REP(i,0,(q-p+1))ans.push_back(str);

  x = max(p-a,r-b);
  y = min(q-a,s-b);
  REP(i,x,y+1){
    ans[a+i-p][b+i-r] = '#';
  }
  x = max(p-a,b-s);
  y = min(q-a,b-r);
  REP(i,x,y+1){
    ans[a+i-p][b-i-r] = '#';
  }
  REP(i,0,(q-p+1))cout << ans[i] << endl;
}