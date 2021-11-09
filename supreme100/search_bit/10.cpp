#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int A[n];
  memset(A,0,sizeof(A));
  for(int i = 0; i < n; ++i){
    cin >> A[i];
  }
  int q; cin >> q;
  int m[q]; 
  for(int i = 0; i < q; ++i){
    cin >> m[i];
  }

  int shift = (1 << n);
  int ans = 0;
  int sum[shift];
  memset(sum,0,sizeof(sum));

    for(int i = 0; i < shift; ++i){
      int bit[30];
      for(int j = 0; j < n; ++j){
        int div = (1 << j);
        bit[j] = (i/div) % 2;
      }
      for(int j = 0; j < n; ++j){
        sum[i] += A[j] * bit[j];
      }
    }

    for(int i = 0; i < q; ++i){
      bool flag = false;
      for(int j = 0; j < shift; ++j){
        if(m[i] == sum[j]) {
          flag = true;
          break;
        }
      }
      if(flag == true) cout << "yes" << endl;
      else cout << "no" << endl;
    }


}