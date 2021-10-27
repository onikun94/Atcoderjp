#include <iostream>
#include <algorithm>
using namespace std;

int N,A[11][11], ans = 100000000;
int P[11] = {1,2,3,4,5,6,7,8,9,10,11};

int main(){
  cin >> N;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <=N; j++){
      cin >> A[i][j];
    }
  }
  do{
    int ret = 0;
    for(int i = 0; i < N -1;i++){
      ret +=A[P[i]][P[i+1]];
    }
    ans = min (ans,ret);
  }while(next_permutation(P,P+N));
}