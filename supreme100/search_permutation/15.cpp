#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int x[N],y[N],perm[N];
  for(int i = 1; i < N+1; ++i) perm[i-1] = i; 
  for(int i = 0; i < N; ++i){
    cin >> x[i+1] >> y[i+1];
  }
  int count = 0;
  double all = 0;
  do{
    count++;
    double total = 0;
    for(int i = 0; i < N-1; ++i){
      double tx = pow(x[perm[i]] - x[perm[i+1]],2);
      double ty = pow(y[perm[i]] - y[perm[i+1]],2);
      total += sqrt(tx+ty) ;
    }
    all += total;
  }while(next_permutation(perm,perm+N));
  // cout << setprecision(10) << all / count << endl; 
  cout << all / count << endl; 
}