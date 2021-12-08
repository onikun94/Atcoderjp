#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int N, X; cin >> N >> X;
  vector<int> A(N);
  vector<int> S(N,0);
  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }

  int count = 0;
  int index = X - 1;
  do{
    S[index] = 1;
    index = A[index] - 1;
    count++;
  }while(!S[index]);

  cout << count << endl;
}